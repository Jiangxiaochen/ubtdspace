#include "mycpp.h"

namespace A{
	int a = 10;
}

int a = 20;

namespace Test{
	void f(){
		using namespace A;
		cout << a << endl;
	}
}

int main()
{
	cout << a << endl;
	//using namespace A;
	//cout << a << endl;
	Test::f();
}
