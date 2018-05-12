#include "jxcutils.h"

#define CHK_VALID printf("	%s	%s\n",\
						errno != ERANGE ? "yes" : "no ", \
						*ptr == '\0' ? "yes" : "no");


int main(int argc, char **argv)
{
	char *ptr;
	assert(argc==2);

	printf("Function	Return Value\n");
	printf("--------	------------\n");
	printf("atof		%g\n", aotf(argv[1]));:
}
