#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line
  printf("There are %d command line argument(s):\n", argc);
  char *dirpath = malloc(128 * sizeof(char));
  int noArg;

  if (argv[1] == NULL) {
    dirpath = ".";
    noArg = 1;
  } else {
    noArg = 0;
    dirpath = argv[1];
    strcat(dirpath, "/");
  }
  printf("dirpath \"%s\"\n", dirpath);
  // Open directory
  DIR *d = opendir(dirpath);

  if (!d) {
    printf("ERROR: dir is %s\n", *d);
    return 1;
  }

  // Repeatly read and print entries
  struct stat buf;

  struct dirent * dirReader = readdir(d);
  char *dirBuf = malloc(128 * sizeof(char));
  char * currentDir = "./";
  // char * diffDir = malloc(128 * sizeof(char));
  // diffDir = strcat(diffDir, )

  if (noArg) {

  }
  int cycle = 0;
   while (dirReader != NULL)
   {

    if (noArg) {
      strcat(dirBuf, currentDir);
    } else {
      // strcat(dirBuf, )
      dirBuf = strcat(dirBuf, dirpath);
    }
    dirBuf = strcat(dirBuf, dirReader->d_name);

    printf("dirbuf:%d \"%s\" - ",cycle, dirBuf);
    stat(dirBuf, &buf);
    printf("stat:%d %10lld - ", cycle, buf.st_size);
    printf("d_name:%d \"%s\" \n", cycle, dirReader->d_name);

    dirReader = readdir(d);



    // printf(" dirReader: %s \t", dirReader->d_type);
    dirBuf[0] = '\0';
    cycle++;
  } 

  // Close directory
  closedir(d);

  return 0;
}