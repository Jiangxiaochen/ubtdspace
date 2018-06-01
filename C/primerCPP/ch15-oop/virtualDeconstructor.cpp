#include "mycpp.h"

class A{
public:
	int a;
public:
	A(int p = 11) : a(p){}
	virtual	~A(){
		cout << "~A()" << endl;
	}
};

class B : public A{
public:
	int b;
	~B(){
		cout << "~B()" << endl;
	}
public:
	B(int p = 11) : b(p){}
};

class C : public B{
	~C(){
		cout << "~C()" << endl;
	}
};

class D{
public:
	~D() = delete;
};

int main()
{
	B *pb = new B;
	A *pa = pb;
	cout << pb->a << " " << pb->b << endl;
	delete pa;
	int *arr = new int[10];
	for(int i = 0; i < 10; i++) arr[i] = 99;
	cout << pb->a << " " << pb->b << endl;
	
	C *pc = new C;
	delete static_cast<B*>(pc);
	D d;
}
