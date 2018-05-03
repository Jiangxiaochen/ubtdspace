#include <jxcutils.h>

int main()
{
	int MB = 0;
	while(1)
	{
		void *a = malloc(1 << 20);
		printf("%x %p\n", a, a);
		printf("allocate %d MB\n", ++MB);
		if(a == NULL) break;
	}
}
