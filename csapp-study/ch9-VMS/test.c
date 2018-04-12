#include <csapp.h>
#include <csapp.h>
#include "memlib.h"
#include "mm.h"

#define pp(p,n) printf("%s addr: %p\n", n, p)

static void init(void);
void test1(void);


int main(int argc, char const *argv[])
{
	init();
	test1();
	return 0;
}

static void init(void){ mem_init();mm_init();}

void test1(){
	void *p1 = mm_malloc(11);
	pp(p1,"p1");
	void *p2 = mm_malloc(21);
	pp(p2, "p2");
	mm_free(p1);
	void *p3 = mm_malloc(12);
	pp(p3,"p3");
}