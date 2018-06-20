#include "mycpp.h"

struct c{
	int val;char c1,c2,c3;
};
struct c1{
	int val;char C1;
};
struct c2:public c1{
	char C2;
};
struct c3:public c2{
	char C3;
};
struct c4:public c3{
	char C4;
};

int main()
{
	c4 c4_1;
	c1* pc1;c2*pc2;c3*pc3;c4*pc4;
	pc4 = &c4_1;
	pc1 = pc4;
	pc2 = pc4;
	pc3 = pc4;
	auto d0 = &c::c1;
	auto d1 = &c::c2;
	auto d3 = &c::c3;
	auto d4 = &c1::C1;
	auto d5 = &c2::C2;
	auto d6 = &c3::C3;
	cout << sizeof(c) << endl;
	cout << sizeof(c1) << endl;
	cout << sizeof(c2) << endl;
	cout << sizeof(c3) << endl;
	cout << sizeof(c4) << endl;
}
