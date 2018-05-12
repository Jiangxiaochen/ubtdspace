#include "jxcutils.h"
#include "assert.h"

void viewBuf(char *a)
{
	for(int i = 0; i < 10; i++){
		printf("i:%d a[i]:%c\n", i, a[i]);
	}
	printf("-------------------------\n");
}

int main()
{
	FILE *fp = fopen("a.txt","r");
	assert(fp != NULL);
	volatile char buf[10];
	setvbuf(fp, buf, _IOFBF, 10);

	int a = 4;
	while(a--){
		printf("%c\n",getc(fp));
	}
	fflush(fp);
	ungetc('a',fp);
	viewBuf(buf);
	ungetc('b',fp);
	viewBuf(buf);
	char c;
	while(( c=getc(fp)) != EOF){
		viewBuf(buf);
		printf("%c\n",c);
	}
}
