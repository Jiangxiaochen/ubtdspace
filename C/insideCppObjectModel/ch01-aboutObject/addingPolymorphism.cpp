#include "mycpp.h"
struct A{
	virtual void f(){
		cout << "aha" << endl;
	}
	long x = 0x12345678;
};
struct B{
	virtual void g(){
		cout << 1 << endl;
	}
	virtual void h(){
		cout << 2 << endl;
	}
	long x = 0x98765432;
};
struct D{
	void f(){

	}
};
struct E{
	virtual void XXT(){

	}
};

struct C : public A, public B,public D,public E{
	void f(){
		cout << "bhb" << endl;
	}
	void g(){
		cout << 2 << endl;
	}
	long y = 0x11223344;
};

int main()
{
	C c;
	A a;
	B b;
	D d;
	E e;


/*
	B &pb = c;
	A &pa = c;
	//cout << pb.x << pa.x << endl;
	
	B *p1 = &c;
	A *p2 = &c;
	cout << p1->x << p2->x << endl;
	C *p3 = &c;
	B *p4 = (B *)p3;
	B *p5 = dynamic_cast<B*>(p3);
	uint64_t d = (uint64_t) p3;
	B *p6 = (B *)d;
*/
	return 0;
}
