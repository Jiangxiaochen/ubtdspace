#include <jxcutils.h>

void (*state1[MAX_STATES])(); // array of pointer to function returning void
extern int a(), b(), c(), d();
int (*state[])() = {
	a,b,c,d
};


