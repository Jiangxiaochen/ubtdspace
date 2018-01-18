#include <signal.h>
#include <unistd.h>
#include <wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

void handler1(int sig){
	int olderrno = errno;
	if((waitpid(-1, NULL, 0)) < 0) {
		// sio_error("waitpid error");
		write(1,"waitpid error\n",20);
	}

	write(1,"handler1 reaped child\n",22);
	sleep(1);
	errno = olderrno;
}

void handler2(int sig){
	int olderrno = errno;
	while(waitpid(-1,NULL,0) >0){
		write(1,"handler1 reaped child\n",22);
	}
	sleep(1);
	errno = olderrno;
}

int main(int argc, char const *argv[])
{
	int n;
	char buf[255];
	if(signal(SIGCHLD, handler2) == SIG_ERR) printf("signal error\n");
	for (int i = 0; i < 3; ++i)
	{
		if(fork() == 0){
			printf("hello from child %d\n", (int)getpid());
			exit(0);
		}
	}

	if((n = read(STDIN_FILENO, buf, sizeof(buf))) < 0) printf("read error\n");

	printf("parent processing input\n");
	while(1);

	return 0;
}