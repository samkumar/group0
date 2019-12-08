/* fcreate.c

   Creates a file. */

#include <stdio.h>
#include <syscall.h>

int
main (int argc, char *argv[])
{
  if (argc != 2)
    {
      printf ("usage: %s FILE\n", argv[0]);
      return EXIT_FAILURE;
    }

  if (!create (argv[1], 0))
    {
      printf ("%s: create failed\n", argv[1]);
      return EXIT_FAILURE;
    }

  return EXIT_SUCCESS;
}
