#include "mycpp.h"

int main()
{
	int a1[] = {
		0,1,2,3,4,5,6
	};

	int a2[] = {
		98,99,97
	};

	auto ret = copy(begin(a1),end(a1),a2);

	VIEW_SEQ(a2);
}
