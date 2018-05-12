#include "jxcutils.h"

int main()
{
	errno = 0;
	int y = sqrt(-1);
	if(errno != 0){
		perror("sqrt error");
		puts(strerror(errno));
		exit(-1);
	}
}
