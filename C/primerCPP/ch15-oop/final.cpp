#include "mycpp.h"

struct A{
	virtual void f() final {
		cout << "Af" << endl;
	}

	void f1(){
		cout << "Af1" << endl;
	}
};

struct B : A{
	void f1(){
		cout << "Bf1" << endl;
	}
};

void f(A &a)
{
	a.f1();
}

int main()
{
	B b;
	b.f1();
	A a;
	a.f1();
	f(a);
	f(b);
}
