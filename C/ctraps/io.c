#include "jxcutils.h"

#define VIEW_BUF\
	for(int i=0; i<N; i++) printf("%c ", buf[i]); \
	printf("\n")

#define N 10

int main(int argc, char ** argv)
{
	FILE *fp = fopen("a.txt","r+");
	assert(fp!=NULL);
	char buf[N];
	memset(buf, 'J', sizeof(char)*N);
	setvbuf(fp, buf, _IOFBF, N);
	VIEW_BUF;

	int c;
	while((c=getc(fp)) != EOF){
		printf("%d\n",c);
		putchar(c-32);
	}
}
