#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define CHILD_MESS	"I want a cookie\n"
#define PAR_MESS	"testing..\n"
#define OOPS(m,x)	{perror(m);exit(x);}

int main()
{
	int pipefd[2];
	int len;
	char buf[BUFSIZ];
	int read_len;

	if(pipe(pipefd) == -1) OOPS("cannot get a pipe", 1);
	switch(fork()){
		case -1:
			OOPS("cannot fork", 2);
			break;
		case 0:
			len = strlen(CHILD_MESS);
			while(1){
				if(write(pipefd[1], CHILD_MESS, len) != len){
					OOPS("write", 3);
				}
				sleep(5);
			}
			break;
		default:
			len = strlen(CHILD_MESS);
			while(1){
				if(write(pipefd[1], PAR_MESS, len) != len){
					OOPS("write", 4);
				}
				sleep(1);
				read_len = read(pipefd[0], buf, BUFSIZ);
				if(read_len <= 0) break;
				write(1, buf, read_len);
			}
	}
}
