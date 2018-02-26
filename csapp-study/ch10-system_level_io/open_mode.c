#include <csapp.h>

#define DEF_MODE S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP|S_IROTH|S_IWOTH
#define DEF_UMASK S_IWGRP|S_IWOTH

int main(int argc, char const *argv[])
{
	//umask(DEF_UMASK);
	//int fd = open("foo.txt", O_CREAT|O_TRUNC|O_WRONLY, DEF_MODE);
	// int fd = open("foo_def.txt",O_RDONLY|O_CREAT);

	int fd1,fd2,fd3;
	fd1 = open("foo.txt",O_CREAT|O_TRUNC|O_RDONLY);
	fd2 = open("foo1.txt",O_CREAT|O_TRUNC|O_RDONLY);
	printf("fd1: %d fd2: %d fd3: %d\n", fd1, fd2, fd3);
	close(fd1);
	fd3 = open("foo2.txt",O_CREAT|O_TRUNC|O_RDONLY);
	printf("fd1: %d fd2: %d fd3: %d\n", fd1, fd2, fd3);

	return 0;
}