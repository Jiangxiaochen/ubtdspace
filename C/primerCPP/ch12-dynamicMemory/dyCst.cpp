#include "mycpp.h"

const int *pci0 = new const int(1);
class A{
	private:
		//int a;
};
class B{
public:
	B(){

	}
};

int main()
{
	const int *pci = new const int(1);
	const A *pa = new const A;
	const B *pb = new const B;
}
