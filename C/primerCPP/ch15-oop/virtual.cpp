#include "mycpp.h"

struct A{
	int a;
	A(int p1 = 0) : a(p1) {}
	virtual void f() const = 0;
};

void A::f() const{
	cout << "af" << endl;
}

struct B : public A{
	int b;
	B(int p1 = 1) : b(p1) {}
};

int main()
{
	B b;
	b.f();
}
