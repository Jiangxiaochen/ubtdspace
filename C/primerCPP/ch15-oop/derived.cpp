#include "mycpp.h"

struct A{
	virtual void f(){
		cout << "af" << endl;
	}
};

struct B : public A{
	virtual void f(){
		cout << "bf" << endl;
	}
};

void f(A a){
	a.f();
}

void f1(A &a){
	a.f();
}


int main()
{
	B b;
	b.f();
	f(b);
	f1(b);
}
