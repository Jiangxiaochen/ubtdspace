#include "mycpp.h"

struct Base{
	void f(){
		cout << "Base" << endl;
	}
	virtual void g(){
		cout << "Base g" << endl;
	}
};

struct Child : public Base{
	void f() const{
		cout << "Child" << endl;
	}
};

int main()
{
	Child c;
	c.f();
	Base *p1 = &c;
	p1->f();
	dynamic_cast<Child*>(p1)->f();

	try{
		const Child &d = dynamic_cast<const Child&>(c);
		d.f();
	}catch(bad_cast & bc){
		cout << bc.what() << endl;
	}

}








