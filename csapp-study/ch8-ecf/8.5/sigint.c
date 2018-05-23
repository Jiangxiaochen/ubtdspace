#include <stdio.h>
#include <signal.h>

void sigint_handler(int sig);

int main(int argc, char const *argv[])
{
	if(signal(SIGINT, sigint_handler) == SIG_ERR){
		fprintf(stderr, "signal error\n");
	}

	pause();

	return 0;
}

void sigint_handler(int sig){
	printf("caught sigint\n");
	exit(0);
}