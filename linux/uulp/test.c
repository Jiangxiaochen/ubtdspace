#include <stdio.h>

int main(int argc, char **argv)
{
	int len = atoi(argv[1]);
	char buf[len];
	FILE *fp = fopen("file.txt" , "r");
	while(fgets(buf, len, fp)){
		fputs(buf,stdout);
		fputs("--",stdout);
	}
}
