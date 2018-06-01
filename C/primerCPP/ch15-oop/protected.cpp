#include "mycpp.h"

class Base{
public:
	Base(int p = 1) : a(p),prot_mem(10){}
protected:
	int prot_mem;
public:
	int a;
};

class Sneaky : public Base{
public:
	Sneaky() : j(2),a(20){}
	friend void clobber(Sneaky &);	// 能访问Sneaky::prot_mem
	friend void clobber(Base &);	//不能访问
	void f(){
		cout << prot_mem << endl;
	}
public:
	int j;
	int a;
};

void clobber(Sneaky &s){
	s.j = s.prot_mem = 0;
}

void clobber(Base &b){
//	b.prot_mem = 0;
}

int main()
{
	Sneaky sn;
	cout << sn.a << endl;
	cout << sn.Base::a << endl;
}
