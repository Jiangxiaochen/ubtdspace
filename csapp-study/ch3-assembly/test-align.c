#include "stdio.h"

long vfram(long n, long idx, long *q)
{
    long i;
    long *p[n];
    p[0] = &i;
    for(i = 1; i < n; i++) p[i] = q;
    return *p[idx];
}

int main(int argc, char const *argv[])
{
	int n = 5;

	// printf("%p %p\n", &argv[0], (char *)argv);
	// printf("%s %s\n", argv[0],(char *)argv);


	char * arr[2];
	arr[0] = "99";
	arr[1] = "999";
	printf("%s %s\n", arr[0], arr[1]);
	printf("%p %p\n", arr[0], arr[1]);
	printf("%s %s\n", arr[0], arr[1]);
	printf("%s %s %p %p\n", (char*)(arr),(char*)(arr+1), (char*)(arr),(char*)(arr+1));
	long idx = 2;
	long q = 99;
	vfram(n,idx,&q);
	return 0;
}