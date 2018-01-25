#ifndef _SBUF_H_
#define _SBUF_H_ 

typedef struct 
{
	int *buf; 	//buffer array
	int n;		//max num of slots
	int front;	//buf[(front+1)%n]
	int rear;	//buf[rear%n]
	sem_t mutex;
	sem_t slots;
	sem_t items;
} sbuf_t;

void sbuf_init(sbuf_t *sp, int n);
void sbuf_deinit(sbuf_t *sp);
void sbuf_insert(sbuf_t *sp, int item);
int sbuf_remove(sbuf_t *sp);

#endif