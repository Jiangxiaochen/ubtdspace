// WARNING:THIS CODE IS BUGGY!
#include <csapp.h>
#define LISTSIZE 10

void deletejob(pid_t);
void initjobs();
void addjob(pid_t);

typedef struct Cell
{
	pid_t pid;
	struct Cell *next;
} Cell;

Cell * createNewCell(){
	Cell *new = (Cell *)malloc(sizeof(Cell));
	new->pid = 0;
	new->next = NULL;
	return new;
}


static Cell *joblist;

void handler(int sig){
	int olderrno = errno;
	sigset_t mask_all,prev_all;
	pid_t pid;

	Sigfillset(&mask_all);
	while((pid = waitpid(-1,NULL,0)) > 0){
		Sigprocmask(SIG_BLOCK,&mask_all,&prev_all);
		deletejob(pid);
		Sigprocmask(SIG_SETMASK, &prev_all, NULL);
	}

	if(errno != ECHILD){
		Sio_error("waitpid error");
	}

	errno = olderrno;
}

int main(int argc, char const *argv[])
{
	pid_t pid;
	sigset_t mask_all,prev_all;
	Sigfillset(&mask_all);
	Signal(SIGCHLD,handler);
	initjobs();
	int i = 0;
	while(i < 2){
		if((pid = Fork()) == 0){
			Execve("/bin/date", argv, NULL);
		}
		Sigprocmask(SIG_BLOCK,&mask_all, &prev_all);
		addjob(pid);
		printList();
		Sigprocmask(SIG_SETMASK, &prev_all, NULL);
		i++;
	}

	return 0;
}

void printList(){
	Cell *index = joblist;
	while(index != NULL){
		printf("%d ", index->pid);
		index = index->next;
	}
	printf("\n****************\n");
}

void deletejob(pid_t pid){
	if(joblist == NULL) return;
	//首部
	if(joblist->pid == pid){
		Cell *tmp = joblist->next;
		free(joblist);
		joblist = tmp;
		return;
	}
	//非首部
	Cell *index1 = joblist->next;
	Cell *index2 = joblist;
	while(1){
		if(index1 == NULL) break;
		if(index1->pid == pid){
			index2->next = index1->next;
			free(index1);
			break;
		}
		index1 = index1->next;
		index2 = index2->next;
	}
}
void initjobs(){
	joblist = NULL;
}
void addjob(pid_t pid){
	if(joblist == NULL){
		joblist = createNewCell();
		joblist->pid = pid;
		return;
	}
	Cell *index = joblist;
	while(1){
		if(index->next == NULL) break;
		index = index->next;
	}
	Cell *add = createNewCell();
	add->pid = pid;
	index->next = add;
}