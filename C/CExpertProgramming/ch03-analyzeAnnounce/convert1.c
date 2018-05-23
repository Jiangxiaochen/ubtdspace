#include "jxcutils.h"


int main(int argc, char **argv)
{
	char (*j)[20];
	j = (char (*)[20]) malloc(20);
	printf("j: %p, j0:%p, j1:%p\n", j, j[0], j[1]);

	char cc = 'a';
	char * const * p; //pointer to const pointer to char
	char * c;
	*p = c;
}
