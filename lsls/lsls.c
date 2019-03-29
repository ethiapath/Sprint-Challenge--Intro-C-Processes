#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line

  printf("There are %d command line argument(s):\n", argc);

  char *dirpath = malloc(128 * sizeof(char));

  if (argv[1] == NULL) {
    dirpath = ".";
  } else {
    dirpath = argv[1];

  }

  printf("dirpath \"%s\"\n", dirpath);

  // Open directory
  DIR *d = opendir(".");
  if (!d) {
    printf("ERROR: dir is %s\n", *d);
    return 1;
  }

  // Repeatly read and print entries

  struct dirent * dirReader = readdir(d);
   while (dirReader != NULL)
   {
    dirReader = readdir(d);
    printf(" \"%s\" \n", dirReader->d_name);

  } 

  // Close directory
  closedir(d);
  return 0;
}