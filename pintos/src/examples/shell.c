#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <syscall.h>

#define COMMAND_BUFLEN 80
#define DEFAULT_PATH "/bin/"

static pid_t resolve_exec (char* filepath);
static void read_line (char line[], size_t);
static bool backspace (char **pos, char line[]);

size_t default_pathlen;

int
main (void)
{
  printf ("Shell starting...\n");
  default_pathlen = strlen(DEFAULT_PATH);
  for (;;)
    {
      char commandbuf[COMMAND_BUFLEN + default_pathlen];
      char* command = commandbuf + default_pathlen;
      strlcpy (commandbuf, DEFAULT_PATH, default_pathlen + 1);

      /* Read command. */
      printf ("--");
      read_line (command, COMMAND_BUFLEN);

      /* Execute command. */
      if (!strcmp (command, "exit"))
        break;
      else if (!memcmp (command, "cd ", 3))
        {
          if (!chdir (command + 3))
            printf ("\"%s\": chdir failed\n", command + 3);
        }
      else if (command[0] == '\0')
        {
          /* Empty command. */
        }
      else
        {
          pid_t pid = resolve_exec (command);
          if (pid != PID_ERROR)
            printf ("\"%s\": exit code %d\n", command, wait (pid));
          else
            printf ("exec failed\n");
        }
    }

  printf ("Shell exiting.");
  return EXIT_SUCCESS;
}

pid_t
resolve_exec(char* filepath)
{
  int fd;
  char* slashptr, * spaceptr;
  char* name = filepath;
  while (*name == ' ')
    {
      *name = '/';
      name++;
    }
  spaceptr = strchr (name, ' ');
  if (spaceptr)
    *spaceptr = '\0';
  fd = open (name);
  if (spaceptr)
    *spaceptr = ' ';
  if (fd == -1)
    {
      slashptr = strchr (name, '/');
      if (!slashptr || (spaceptr && slashptr >= spaceptr))
        return exec (filepath - default_pathlen);
    }
  else
      close (fd);
  return exec (name);
}

/* Reads a line of input from the user into LINE, which has room
   for SIZE bytes.  Handles backspace and Ctrl+U in the ways
   expected by Unix users.  On return, LINE will always be
   null-terminated and will not end in a new-line character. */
static void
read_line (char line[], size_t size)
{
  char *pos = line;
  for (;;)
    {
      char c;
      read (STDIN_FILENO, &c, 1);

      switch (c)
        {
        case '\r':
          *pos = '\0';
          putchar ('\n');
          return;

        case '\b':
          backspace (&pos, line);
          break;

        case ('U' - 'A') + 1:       /* Ctrl+U. */
          while (backspace (&pos, line))
            continue;
          break;

        default:
          /* Add character to line. */
          if (pos < line + size - 1)
            {
              putchar (c);
              *pos++ = c;
            }
          break;
        }
    }
}

/* If *POS is past the beginning of LINE, backs up one character
   position.  Returns true if successful, false if nothing was
   done. */
static bool
backspace (char **pos, char line[])
{
  if (*pos > line)
    {
      /* Back up cursor, overwrite character, back up
         again. */
      printf ("\b \b");
      (*pos)--;
      return true;
    }
  else
    return false;
}
