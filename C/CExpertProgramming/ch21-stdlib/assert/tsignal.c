#include "jxcutils.h"

void handler(int sig);
void raise_sig(void);

int main(void)
{
	void (*orig_handler)(int);

	printf("Installing handler for signal %d\n", SIGINT);
	orig_handler = signal(SIGINT, handler);
	raise_sig();

	puts("changing handler to sig_ign");
	signal(SIGINT, SIG_IGN);
	raise_sig();

	puts("restoring original handler");
	signal(SIGINT, orig_handler);
	raise_sig();

	printf("program terminates normally\n");
	return 0;
}

void handler(int sig)
{
	printf("Handler caller for signal %d\n", sig);
}

void raise_sig(void)
{
	raise(SIGINT);
}
