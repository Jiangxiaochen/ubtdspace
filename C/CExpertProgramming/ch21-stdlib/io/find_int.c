#include "jxcutils.h"

int find_int(const char *filename)
{
	FILE *fp = fopen(filename, "r");
	int n;
	assert(fp);
	int ret = 0;
	while(fscanf(fp, "%d", &n) != 1){
		if(ferror(fp)) ret = -2;
		if(feof(fp)) ret = -3;
		fscanf(fp, "%*[^\n]";)
	}
	
	return ((ret==0) ? n : ret);

}
