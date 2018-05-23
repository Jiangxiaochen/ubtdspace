#include "mycpp.h"

int main()
{
	vector<const char *> vc = {
		"aaa","bbb"
	};
	
	vector<const char *> vc22 = {
		"aaa","bbb"
	};

	printf("%p %p %p %p\n", vc[0], vc[1], vc22[0], vc22[1]);
}
