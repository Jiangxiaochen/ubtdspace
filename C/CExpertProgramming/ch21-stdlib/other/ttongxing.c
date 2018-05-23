#include "jxcutils.h"

typedef void (*exit_hander)(void);

void f(void)
{
	printf("haha, get it: at_exit\n");
}

int main(int argc, char **argv)
{
	exit_hander eh = f;
	atexit(eh);

	if(atoi(argv[1]) == 1) abort();
	if(atoi(argv[1]) == 2) exit(1);

	puts(getenv("PATH"));
	system("ls > systemls");
}
