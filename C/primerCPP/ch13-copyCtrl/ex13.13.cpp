#include "mycpp.h"

struct X{
	X() {
		cout << "X()" << endl;
	}
	X(const X &){
		cout << "X(const X&)" << endl;
	}
	~X(){
		cout << "~X()" << endl;
	}
	X & operator=(const X &rhs){
		cout << "operator=" << endl;
		return *this;
	}
};

int main()
{
	X a;
	X b(a);
	X *c = new X;
	X *d = new X(*c);
	a = b;
	c = d;
	delete c;
}
