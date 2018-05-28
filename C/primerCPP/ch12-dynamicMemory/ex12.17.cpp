#include "mycpp.h"

int main()
{
	int ix = 1024, *pi = &ix, *pi2 = new int(2048);

	typedef unique_ptr<int> IntP;

	//IntP p0(ix);	//int to int *
	IntP p1(pi);	//not dynamic mem
	IntP p2(pi2);	//ok
	IntP p3(&ix);	//not dynamic mem
	IntP p4(new int(2048));	//ok
	IntP p5(p2.get());	//illegal
}
