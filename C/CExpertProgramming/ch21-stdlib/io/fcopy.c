#include "jxcutils.h"
#include "assert.h"
int main(int argc, char **argv)
{
	FILE *src, *dst;
	int ch;

	assert(argc==3);
	assert(src=fopen(argv[1],"rb"));
	assert(dst=fopen(argv[2],"wb"));

	while((ch=getc(src)) != EOF) putc(ch, dst);
	fclose(src);
	fclose(dst);
	return 0;
}
