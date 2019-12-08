/* rmrec.c

   Removes files and directories specified on command line recursively. */

#include <stdio.h>
#include <syscall.h>

static void
safe_chdir (const char* path)
{
  if (!chdir(path))
    {
      printf ("%s: chdir failed\n", path);
      exit (-1);
    }
}

static bool
remove_recursive (const char* name)
{
  int fd = open (name);
  char subfile[READDIR_MAX_LEN + 1];
  bool success = true;
  if (fd == -1)
    {
      printf ("%s: open failed\n", name);
      return false;
    }
  if (isdir (fd))
    {
      safe_chdir (name);
      while (readdir (fd, subfile))
          success = success && remove_recursive (subfile);
      chdir ("..");
    }
  close(fd);
  if (!remove(name))
    {
      printf ("%s: remove failed\n", name);
      success = false;
    }
  return success;
}

int
main (int argc, char *argv[])
{
  bool success = true;
  int i;

  for (i = 1; i < argc; i++)
    if (!remove_recursive (argv[i]))
      {
        printf ("%s: remove failed\n", argv[i]);
        success = false;
      }
  return success ? EXIT_SUCCESS : EXIT_FAILURE;
}
