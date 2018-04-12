#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

void unix_error(char *);

inline void unix_error(char *msg){
	fprintf(stderr, "%s %s\n", msg, strerror(errno));
	exit(0);
}

int main(int argc, char const *argv[])
{
	int pid;
	if((pid = fork()) < 0){
		unix_error("fork error");
	}
	//printf("pid: %d\n", pid);
	return 0;
}

pid_t Fork(void){
    pid_t pid;
    if((pid = fork()) < 0) unix_error("fork error");
    return pid;	
}