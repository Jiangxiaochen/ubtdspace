#include "mycpp.h"

class B0{
public:
	virtual ~B0() = 0;
	virtual void interface() const = 0;
	virtual const char * mumble() const {
		return _mumble;
	}
	B0(char * v = 0) : _mumble(v){}
protected:
	char *_mumble;
};

B0::~B0(){

}

class D1 : public B0{
public:
	//D1();
	virtual void interface() const{

	}
};

int main()
{
	D1 od;
}
