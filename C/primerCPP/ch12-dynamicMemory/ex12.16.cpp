#include "mycpp.h"

int main()
{
	unique_ptr<int> p(new int());
	cout << *p << endl;
	unique_ptr<int> p1(p);
}
