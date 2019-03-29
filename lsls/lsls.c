#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line

  printf("There are %d command line argument(s):\n", argc);

  char *dirpath = malloc(128 * sizeof(char));

  dirpath = argv[1];

  printf("dirpath \"%s\"\n", dirpath);

  // Open directory
  DIR *d = opendir(".");

  // Repeatly read and print entries

  // Close directory
  closedir(d);
  return 0;
}