#include "jxcutils.h"

int main(int argc, char **argv)
{
	unsigned long long int n = strtoull(argv[1],NULL,10);
	printf("creating %llu byte\n", n);
	
	FILE *fp = fopen("input.txt","wb");
	while(n--){
		//printf("%ld ", random());
		fprintf(fp,"%ld ", random());
	}

	fclose(fp);
}
