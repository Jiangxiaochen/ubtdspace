#include "csapp.h"


// int main(int argc, char const *argv[])
// {
// 	int fd1, fd2;
// 	char c;
// 	fd1 = open("foobar.txt", O_RDONLY, 0);
// 	fd2 = open("foobar.txt", O_RDONLY, 0);
// 	printf("%d %d\n", fd1, fd2);
// 	read(fd1, &c, 1);
// 	read(fd1, &c, 1);
// 	printf("c = %c\n", c);
// 	// while(read(fd1, &c, 1) != 0){
// 	// 	printf("c = %c\n", c);
// 	// }
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int fd;
// 	char c;
// 	fd = open("foobar.txt", O_RDONLY, 0);
// 	if(fork() == 0){
// 		read(fd, &c, 1);
// 		exit(0);
// 	}
// 	wait(NULL);
// 	read(fd, &c, 1);
// 	printf("c = %c\n", c);
// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int fd = open("stdout.txt", O_RDWR);
// 	printf("fd: %d\n", fd);
// 	int ret = dup2(fd, 1);
// 	printf("ret: %d\n", ret);

// 	return 0;
// }

// int main(int argc, char const *argv[])
// {
// 	int fd1,fd2;
// 	char c;
// 	fd1 = open("foobar.txt",O_RDONLY, 0);
// 	fd2 = open("foobar.txt",O_RDONLY, 0);
// 	read(fd2, &c, 1);
// 	dup2(fd2, fd1);
// 	read(fd1, &c, 1);
// 	printf("c = %c\n", c);
// 	return 0;
// }

int main(int argc, char const *argv[])
{
	int a;
	printf("%d", 1);
	printf("%d", 2);
	scanf("%d",&a);
	printf("%d\n", a);
	return 0;
}