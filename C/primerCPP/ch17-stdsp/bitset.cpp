#include "mycpp.h"

int main()
{
	bitset<32> b;
	int a[7] = {
		1,2,3,5,8,13,21
	};
	for(int i = 0; i < 7; i++) b.set(a[i]);
	cout << b << endl;
}
