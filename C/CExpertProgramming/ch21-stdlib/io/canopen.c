#include "jxcutils.h"
#include "assert.h"


int main(int argc, char **argv)
{
	FILE *fp;
	assert(argc == 2);
	assert((fp=fopen(argv[1],"r")) != NULL);
	printf("%s can be opened\n", argv[1]);
	fclose(fp);
}
