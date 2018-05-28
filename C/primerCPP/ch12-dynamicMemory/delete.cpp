#include "mycpp.h"

int main()
{
	int *pi = (int *)calloc(10,sizeof(int));
	int *pi2 = (int *)malloc(sizeof(int));
	delete(pi);
}
