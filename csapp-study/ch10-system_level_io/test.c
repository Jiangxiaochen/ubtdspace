#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "myrio.h"

/*
//read/write 传送的字节比n少
int main()
{
	int fd = open("test.txt",O_RDONLY);
	if(fd == -1) exit(-1);
	char buf[10];
	ssize_t ret1 = read(fd, buf, 4);
	ssize_t ret2 = read(fd, buf, 4);
	printf("%ld\n", ret1);
	printf("%ld\n", ret2);
	return 0;
}
*/
/*
//rio_readn
int main()
{
	int fd = open("test.txt",O_RDONLY);
	if(fd == -1) exit(-1);
	char buf[100];
	rio_readn(fd, buf, 3);
}
*/
//sizeof
void hehe(int *a, int b[])
{
	printf("sa:%lu sb:%lu\n",sizeof(a),sizeof(b));
}
void testsizeof(int n)
{
	int a[n];
	int b[5];
	printf("sa:%lu sb:%lu\n",sizeof(a),sizeof(b));
	hehe(a,b);
}
int main(int argc, char **argv)
{
	int n = 5 - argc;
	testsizeof(n);
}
