#include <fcntl.h>

int main()
{
	int s;
	s = fcntl(fd, F_GETFL);
	s |= O_SYNC;
	result = fcntl(fd, F_SETFL, s);
	if(result == 1) perror("setting SYNC");
}
