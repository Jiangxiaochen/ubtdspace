#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

pid_t getpid(void);
pid_t getppid(void);


int main(int argc, char const *argv[])
{
	pid_t pid;
	int x = 1;

	printf("hehe1\n");

	pid = fork();

	printf("pid: %d\n", pid);

	if(0 == pid){

		while(1){
			printf("child1\n");
			printf("child2\n");
			printf("child3\n");
		}

	}else{

		while(1){
			printf("parent1\n");
			printf("parent2\n");
			printf("parent3\n");
		}
	}

	
	return 0;
}