#include <stdio.h>
#include <dirent.h>

#include <stdlib.h>

#include <sys/stat.h>

void printFiles(char *dirName) {
  DIR *dir;
  
  struct dirent *dent;
  struct stat statBuff;

  char relPath[512];
  char fullPath[512];

  const char * relPathFormat = (dirName[strlen(dirName) - 1] == '/') ? "%s%s" : "%s/%s";
  dir = opendir(dirName);

  if(dir != NULL) {
      
      while((dent = readdir(dir)) != NULL) {
        sprintf(relPath, relPathFormat, dirName, dent->d_name);
        _makepath(relPath, "w", fullPath, "makepath", "c");
        stat(fullPath, &statBuff);
        if(statBuf.st_mode & S_IFREG) { printf("%Old\t%s\n", statBuff.st_size, dent->d_name); }
        else if(statBuff.st_mode & S_IFDIR) { printf ("DIR  \t%s\n", dent->d_name); }
        else if(statBuff.st_mode & S_IFBLK) { printf("LINK  \t%s\n", dent->d_name); }
        else { printf("UNK/DEVICE\t%s\n", dent->d_name); }

      }
  }
  closedir(dir);
}


/**
 * Main
 */
int main(int argc, char **argv) {
  // Parse command line

  // Open directory

  // Repeatly read and print entries
  puts("Length\n");
  if(argc < 2) { printFiles("."); }

  // Close directory
  int i = 1;
  for (;i < argc; i++) {
    printFiles(argv[i]);
  }
  return 0;
}