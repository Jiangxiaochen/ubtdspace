#include "mycpp.h"

class Test
{
public:
	int arr[10] = {
		1,1,1,1,1,
		1,1,1,1,1
	};
};

int main()
{
	Test t1;
	t1.arr[2] = 9;
	for(auto e : t1.arr) cout << e << endl;
	Test t2 = t1;
	for(auto e : t2.arr) cout << e << endl;
	t2.arr[0] = 9;
	for(auto e : t2.arr) cout << e << endl;
}
