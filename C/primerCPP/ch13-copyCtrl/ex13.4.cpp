#include "mycpp.h"

class Test
{
public:
	Test() = default;
	Test(const Test &){
		cout << "called" << endl;
		mytrace();
	}
private:
	int data = 0;
};

Test global;

Test func(Test t)
{
	Test local = t, *heap = new Test(global);
	*heap = local;
	Test ta[4] = {
		local, *heap
	};
	return *heap;
}


int main()
{
	Test l;
	func(l);
}
