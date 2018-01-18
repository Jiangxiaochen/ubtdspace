#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include "/home/linux/jxc-workspace/csapp.h"

int main(int argc, char const *argv[])
{
	int a[] = {9};
	int pid = Fork();

	if(pid > 0){
		//父进程
		printf("pid: %d\n", pid);
		int count = 0;
		while(1){
			count++;
			int cpid = waitpid(pid,a,WNOHANG);
			if(cpid > 0){
				printf("cpid:%d\n", cpid);
				if(WIFEXITED(a[0])){
					printf("WIFEXITED at count: %d\n", count);
				}
				break;
			}
		}
	}
	
	

	return 0;
}