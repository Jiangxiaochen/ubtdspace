#include <signal.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	pid_t pid;
	if((pid = fork()) == 0){
		pause();
		printf("control should never reach here\n");
		exit(0);
	}

	kill(pid, SIGKILL);
	return 0;
}