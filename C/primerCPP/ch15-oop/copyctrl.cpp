#include "mycpp.h"

class A{
public:
	A() : a(10) {

	}
	int a;
};

class B : public A{
public:
	B() : b(20){

	}
	int b;
	B& operator=(const B& oth){
		b = oth.b;
	}
};

int main()
{
	B b1,b2;
	cout << b1.b <<" "<< b2.b << endl;
	b2.b = 21;
	b2.a = 11;
	b1 = b2;
	cout << b1.a << " " << b1.b << endl;
}
