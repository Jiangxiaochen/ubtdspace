#include "mycpp.h"

void func(vector<int> &vi)
{
	auto it1 = vi.begin();
	while(it1 != vi.end()){
		++it1;
		vi.insert(it1,42);
		++it1;
		cout << 42 << endl;
	}
}

int main()
{
	vector<int> vi = {
		1,2,3,4,5
	};

	func(vi);

	VIEW_SEQ(vi);
}
