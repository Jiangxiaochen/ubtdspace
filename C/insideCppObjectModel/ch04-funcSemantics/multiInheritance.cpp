#include "mycpp.h"

struct B1{
	long x = 1;
	virtual ~B1(){}
	virtual void speak(){}
	virtual void clone(){}
};

struct B2{
	long y = 2;
	virtual ~B2(){}
	virtual void mumble(){}
	virtual void clone(){}
};

struct D1 : public B1, public B2{
	long z = 3;
	~D1(){}
	void clone(){}
};

int main()
{
	B1 b1;
	B2 b2;
	D1 d1;
	return 0;
}
