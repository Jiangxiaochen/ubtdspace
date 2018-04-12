#include <csapp.h>

int main(int argc, char const *argv[])
{
	// int a = 10;
	// int *ptr_a = &a;
	// scanf("%d", ptr_a);
	// printf("%d\n", a);
	// 
	// 
	// long unsigned int aa = 99999999;
	// int *a = (int *)malloc(sizeof(int)*aa);
	// for (int i = 0; i < aa; ++i)
	// {
	// 	if(a[i] != 0) printf("i: %d v: %d\n", i, a[i]);
	// }
	// 
	// 
	int *p = ref();
	printf("%s\n", );
	return 0;
}

int *ref(){
	int val;
	return &val;
}