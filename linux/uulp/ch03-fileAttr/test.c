#include <stdio.h>
#include <string.h>

int main()
{
	int a = f();
	printf("%d\n", a);
	char *s0 = "hello";
	char arr[2][5];
	strncpy(arr[0],s0,5);
	strncpy(arr[1],s0,6);
	
	printf("%s\n",arr[0]);
	printf("%s\n",arr[1]);
}

int f()
{
	return 1;	
}
