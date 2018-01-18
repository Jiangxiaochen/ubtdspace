#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <signal.h>

unsigned int snooze(unsigned int secs){
    unsigned int left_time = sleep(secs);
	printf("Slept for %d of %d secs\n", secs - left_time, secs);
	return left_time;
}

void sigint_handler(int sig){
	printf("\n");
}

int main(int argc, char const *argv[])
{
	int a = atoi(argv[1]);
	if(signal(SIGINT, sigint_handler) == SIG_ERR){
		fprintf(stderr, "signal error\n");
	}
	snooze(a);
	return 0;
}