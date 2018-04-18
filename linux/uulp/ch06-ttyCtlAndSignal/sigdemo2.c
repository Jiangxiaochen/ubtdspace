#include <stdio.h>
#include <signal.h>

int main()
{
	void f(int);
	int i;
	signal(SIGINT, SIG_IGN);
	printf("you cant stop me!\n");
	while(1)
	{
		sleep(1);
		printf("haha\n");
	}
}

void f(int signum)
{
	printf("OUCH!\n");
}
