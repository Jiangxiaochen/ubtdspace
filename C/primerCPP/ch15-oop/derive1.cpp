#include "mycpp.h"

struct A{

};

struct B : protected A{
	void conv(A &){

	}
};

struct C : private B{
	void conv(A &){

	}
};

void f(A &)
{

}

int main()
{
	B b;
//	f(b);//不是公有继承，不能转换
	b.conv(b);
	C c;
	c.conv(b);
}
