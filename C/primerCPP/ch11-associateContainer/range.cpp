#include "mycpp.h"

int main()
{
	vector<int> vi{
		1,2,3,4,5,6,6,6,7
	};

	multimap<int,int> mmii = {
		make_pair(1,2),
		make_pair(1,2),
		make_pair(1,2),
		make_pair(1,2),
	};

	VIEW_MAP(mmii);

	auto its = mmii.equal_range(1);

	cout << its.first->second << endl;
}
