#include "dirent.h"
#include "jxcutils.h"

int main(int argc,  char **argv)
{
	DIR				*dp;
	struct dirent	*dirp;

	assert(argc == 2);
	assert((dp = opendir(argv[1])));

	while((dirp = readdir(dp)) != NULL) printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}
