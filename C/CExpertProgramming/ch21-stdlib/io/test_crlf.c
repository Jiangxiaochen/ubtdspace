#include <stdio.h>

int main()
{
	FILE *fp;
	assert(fp=fopen("crlf.txt","wb"));
	putc('a', fp);
}

