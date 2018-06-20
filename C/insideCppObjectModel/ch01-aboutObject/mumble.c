#include "jxcutils.h"

struct mumble{
	char pc[1];
};

typedef struct mumble mumble;

int main(int argc, char **argv)
{
	printf("mumble size: %lu", sizeof(mumble));
	struct mumble *pm = (struct mumble *)
		malloc(sizeof(mumble) + strlen(argv[1]) + 1);
	strcpy(pm->pc,argv[1]);
}
