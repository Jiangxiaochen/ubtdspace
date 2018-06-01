#include "mycpp.h"

struct A{
	A(){
		cout << "A()" << endl;
	}
	~A(){
		cout << "~A()" << endl;
	}
};

struct B : public A{
	B(){
		cout << "B()" << endl;
	}
	~B(){
		cout << "~B()" << endl;
	}
};

int main()
{
	B b;
	A a;
	A *p = &a;
	B *p1 = static_cast<B*>(p);
}

