#include "jxcutils.h"

#define	BUFFSIZE	4096

int main(void)
{
	int		n;
	char	buf[BUFFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
		if(write(STDOUT_FILENO, buf, n) != n)
			fprintf(stderr,"%s\n","write error");

	if(n < 0) fprintf(stderr,"%s\n","read error");

	return 0;
}