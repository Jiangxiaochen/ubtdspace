#include "mycpp.h"

class Test{
public:
	~Test(){
		delete p;
	}
	Test():p(new int()){}
private:
	int *p;
};

int main()
{
	assert(atexit(mytrace) == 0);
	Test a;
	Test b(a);
}
