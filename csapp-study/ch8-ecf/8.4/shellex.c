#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#define MAXARGS 128
#define MAXLINE 128

void eval(char *cmdline);
int parseline(char *buf, char **argv);
int buildin_command(char **argv);

int main(){
	char cmdline[MAXLINE];
	while(1){
		printf(">");
		fgets(cmdline, MAXLINE, stdin);
		if(feof(stdin)) exit(0);
		eval(cmdline);
	}
}

void eval(char *cmdline){
	char *argv[MAXARGS];	//argument list execve
	char buf[MAXLINE];	//holds modified command line
	int bg;			//should the job run in bg or fg
	pid_t pid;		//process id

	strcpy(buf,cmdline);
	bg = parseline(buf, argv);
	if(argv[0] == NULL) return;	//ignore empty lines

	if(!buildin_command(argv)){	
		if((pid = fork()) == 0){	// child runs user job
			if(execve(argv[0], argv) < 0){
				printf("%s: Command not found.\n", argv[0]);
				exit(0);
			}
		}
		//parent waits for foreground job to terminate
		if(!bg){
			int status;
			if(waitpid(pid, &status, 0) < 0){
				printf("waitpid error\n");
			}
		}else{
			printf("%d %s\n", pid, cmdline);
		}
	}

	return;
}

int buildin_command(char **argv){
	if(!strcmp(argv[0], "quit")) exit(0);
	if(!strcmp(argv[0], "&")) return 1;
	return 0;
}

int parseline(char *buf, char **argv){
	char *delim;				//points to first space delimiter
	int argc;				//number of args
	int bg;					//background job?

	buf[strlen(buf)-1] = ' ';		//replace trailing \n with space
	while(*buf && (*buf == ' ')) buf++;	//ignore leading spaces
	//build argv list
	argc = 0;
	while((delim = strchr(buf,' '))){
		argv[argc++] = buf;
		*delim = '\0';
		buf = delim + 1;
		while(*buf && (*buf == ' ')) buf++;
	}

	argv[argc] = NULL;
	if(argc == 0) return 1;

	if((bg = (*argv[argc-1] == '&')) != 0) argv[--argc] = NULL;

	return bg;
}
