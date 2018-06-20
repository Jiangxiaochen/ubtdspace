#include "mycpp.h"

class A{
	void NV_FUNC(){}
	virtual void FUNC(){}
};
class B:public A{
	void FUNC(){}
	virtual void FUNC2(){}
};
class C:public B{
	virtual void FUNC3(){}
};

int main()
{
	C c;
	return 0;
}
