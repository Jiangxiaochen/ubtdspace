#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "/home/linux/jxc-workspace/csapp.h"

#define N 2

int main(){
	int status, i;
	pid_t pid[N],retpid;
	for(i = 0; i < N; i++){
		if((pid[i] = Fork()) == 0) exit(100+i);
	}

	printf("pid: %d %d\n", pid[0], pid[1]);
	i = 0;
	while((retpid = waitpid(pid[i++], &status, 0)) > 0){
		printf("%d\n", i);
		if(WIFEXITED(status)){
			printf("child %d terminated normallly with exit\
				 status = %d\n", pid, WEXITSTATUS(status));
		}
		else{
			printf("child %d terminated abnormally\n", retpid);
		}
	}

	if(errno != ECHILD){
		unix_error("waitpid error");
	}

	exit(0);
}