#include "mycpp.h"

struct base1{
	void f(){
		cout << "base1 f" << endl;
	}
};

struct base2{
	void f(){
		cout << "base2 f" << endl;
	}
};

struct child : public base1, public base2{
	
};

int main()
{
	child c1;
	//c1.f();
	c1.base1::f();
}


