#include "mycpp.h"

int main()
{
	void *p = operator new(4);
	new (p) int(10);
	cout << *(int*)(p) << endl;

	int a = 99;
	new (&a) int(999);
	cout << a << endl;
}
