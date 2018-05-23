#include "jxcutils.h"

int main()
{
	int i, a[10];
	int *b = &i;
	for(i = 1; i <= 11; i++){
		a[i] = 0;
//		printf("a[%d]: %p\n", i, &a[i]);
	};
	printf("%p\n",b);
	printf("%d\n",i);
	printf("%p\n",&i);
	for(int i = 0; i < 10; i++) printf("%d %p\n",a[i],&a[i]);
}
