#include "memlib.h"
#include <csapp.h>

static char *mem_heap;		//points to first byte of heap
static char *mem_brk;		//points to last byte of heap + 1
static char *mem_max_addr;	//max leagal heap addr + 1


void mem_init(void){
	mem_heap = (char *)Malloc(MAX_HEAP);
	mem_brk = (char *)mem_heap;
	mem_max_addr = (char *)(mem_heap + MAX_HEAP);
	printf("mem_heap: %p mem_brk: %p mem_max_addr: %p\n", mem_heap, mem_brk, mem_max_addr);
}

void *mem_sbrk(int incr){
	char *old_brk = mem_brk;
	if((incr < 0) || ((mem_brk + incr) > mem_max_addr)){
		errno = ENOMEM;
		fprintf(stderr, "Error: mem_sbrk failed. Ran out of memory...\n");
		return (void *)-1;
	}
	printf("mem_sbrk: %d bytes\n", incr);
	mem_brk += incr;
	printf("old_brk: %p new_brk: %p\n", old_brk, mem_brk);
	return (void *)old_brk;
}



