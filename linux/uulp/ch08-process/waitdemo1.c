#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

#define DELAY 2

int main()
{
	int newpid;
	void child_code(), parent_code();
	printf("before: mypid is %d\n", getpid());
	if((newpid = fork()) == -1) perror("fork");
	else if(newpid == 0) child_code(DELAY);
	else parent_code(newpid);
}

void child_code(int delay)
{
	printf("childe %d here. will sleep for %d seconds\n", getpid(), delay);
	sleep(delay);
	printf("childe done. about to exit\n");
	exit(17);
}

void parent_code(int childpid)
{
	int wait_rv;
	wait_rv = wait(NULL);
	printf("done waiting for %d. wait returned: %d\n", childpid, wait_rv);
}
