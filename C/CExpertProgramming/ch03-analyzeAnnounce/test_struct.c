#include "jxcutils.h"
#include <stdbool.h> 

struct ST2{
	int a;
};	//must have semi-colon

typedef struct {
	bool hehe;
	int a;
	double b;
} st_ab;


typedef struct {
	unsigned int inactive : 1;
	unsigned int : 1;
	unsigned int refcount : 6;
	unsigned int : 0;
	short pid_id;
	struct st_bit *link;
} st_bit;

int main()
{
	st_ab a;
	st_bit b;
	b.inactive = 0x7f;
	printf("%u\n", b.inactive);
}
