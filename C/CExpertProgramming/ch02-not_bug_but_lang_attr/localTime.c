#include "jxcutils.h"

char *localized_time_r(char *filename, char *buffer)
{
	struct tm *tm_ptr;
	struct stat stat_block;

	stat(filename, &stat_block);
	tm_ptr = localtime(&stat_block.st_mtime);
	printf("%d\n", sizeof(buffer));
	strftime(buffer, sizeof(buffer), "%a %b %e %T %Y", tm_ptr);

	return buffer;
}
char *localized_time(char *filename)
{
	struct tm *tm_ptr;
	struct stat stat_block;
	static char buffer[120];

	stat(filename, &stat_block);
	tm_ptr = localtime(&stat_block.st_mtime);

	strftime(buffer, sizeof(buffer), "%a %b %e %T %Y", tm_ptr);

	return buffer;
}


int main(int argc, char **argv)
{
	printf("%s\n", localized_time("."));
	char *buffer;
	char buffer2[30];
	printf("buffer2 size: %d\n", sizeof(buffer2));
	buffer = (char *)(malloc(50));
	printf("%d\n",sizeof(buffer));
	localized_time_r(".", buffer);
	printf("%s\n", buffer);
}
