#include "mycpp.h"

class Test
{

};
int main()
{
	auto p = make_shared<string>("abc");
	auto vi = vector<int>{
		1,2,3
	};
	auto p2 = make_shared<vector<int>>();
	p2->push_back(99);
	p2->push_back(98);

	int *rp = new int(111);
	cout << vi[2] << endl;
	cout << *p << endl;

}
