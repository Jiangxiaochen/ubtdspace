#include "mycpp.h"

class X{};
class Y: public virtual X{};
class Z: public virtual X{};
class A: public Y,public Z{};


int main()
{
	X x;
	Y y;
	Z z;
	A a;
	cout << sizeof(x) << endl;
	cout << sizeof(y) << endl;
	cout << sizeof(z) << endl;
	cout << sizeof(a) << endl;
}
