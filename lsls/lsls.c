#include <stdio.h>
#include <dirent.h>

#include <stdlib.h>

#include <sys/stat.h>
#include <linux/limits.h>

void printFiles(char *dirName) {
  DIR *dir;
  
  struct dirent *dent;
  struct stat statBuff;

  char relPath[512];
  char fullPath[512];

  const char * relPathFormat = (dirName[strlen(dirName) - 1] == '/') ? "%s%s" : "%s/%s";
  dir = opendir(dirName);


}


/**
 * Main
 */
int main(int argc, char **argv)
{
  // Parse command line

  // Open directory

  // Repeatly read and print entries
  puts("Length\n");
  if (argc < 2) { printFIles(".");}

  // Close directory
  int i = 1;
  for (;i < argc; i++)
  {
    printFiles(argv[i]);
  }
  return 0;
}