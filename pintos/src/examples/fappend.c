/* fappend.c

   Appends a line to a file. */

#include <stdio.h>
#include <string.h>
#include <syscall.h>

int
main (int argc, char *argv[])
{
  int i, fd;
  size_t len;

  if (argc <= 2)
    {
      printf ("usage: %s FILE word0 word1 ...\n", argv[0]);
      printf ("appends the specified words to file, followed by a newline");
      return EXIT_FAILURE;
    }

  fd = open (argv[1]);
  if (fd == -1)
    {
      printf ("%s: open failed\n", argv[1]);
      return EXIT_FAILURE;
    }

  seek(fd, (unsigned int) filesize(fd));
  for (i = 2; i < argc; i++)
    {
      len = strlen(argv[i]);
      argv[i][len] = (i == argc - 1) ? '\n' : ' ';
      if ((int) (len + 1) != write (fd, argv[i], len + 1))
        {
          close(fd);
          return EXIT_FAILURE;
        }
    }

  close (fd);

  return EXIT_SUCCESS;
}
