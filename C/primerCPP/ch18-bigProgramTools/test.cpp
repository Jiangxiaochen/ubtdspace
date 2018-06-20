#include "mycpp.h"

class JXCCLASS{
public:
	JXCCLASS(int a) : data(a){

	}
private:
	int data;
};

int main()
{
	JXCCLASS t(1);
	JXCCLASS t1 = t;

}
