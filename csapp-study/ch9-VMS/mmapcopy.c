#include <csapp.h>

/*
void *mmap(void *start, size_t length, int prot, int flags, int fd, off_t offset);

prot：
PROT_EXEC:可以被指令组成
PROT_READ:可读
PROT_WRITE:可写
PROT_NONE：不能被访问

flag：
MAP_ANON:匿名对象
MAP_PRIVATE:私有对象
MAP_SHARED:共享对象

int munmap(void *start, size_t length);
int open(const char *pathname, int flags[, mode_t mode])

*/

int main(int argc, char const *argv[])
{
	const char *file = argv[1];
	int fd = open(file,O_RDONLY);
	printf("%d\n", fd);
	struct stat st;
	fstat(fd, &st);
	void *bufp = mmap(NULL, st.st_size, PROT_READ, MAP_PRIVATE, fd, 0);
	write(STDOUT_FILENO,bufp,st.st_size);
	//fflush(stdout);
	return 0;
}