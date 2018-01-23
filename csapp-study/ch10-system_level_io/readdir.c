#include "csapp.h"

typedef struct dirent dirent;

int main(int argc, char const *argv[])
{
	DIR *streamp;
	dirent *dep;
	streamp = opendir(argv[1]);
	errno = 0;
	while((dep = readdir(streamp)) != NULL){
		printf("found file: %s inode: %lu\n", dep->d_name, dep->d_ino);
	}
	closedir(streamp);
	return 0;
}