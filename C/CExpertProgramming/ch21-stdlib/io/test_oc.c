#include "jxcutils.h"
#include "assert.h"

#define FILE_NAME "example.dat"

int main()
{
	FILE *fp;
	fp = fopen(FILE_NAME, "r");
	assert(fp!=NULL);
	fclose(fp);
	return 0;
}
