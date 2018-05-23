#include "mycpp.h"

int main()
{
	vector<int> vi = {
		1,2,3,4,5,6,7,8,9
	};

	list<int> li1,li2,li3;
	copy(vi.begin(),vi.end(),inserter(li1,li1.begin()));
	copy(vi.begin(),vi.end(),back_inserter(li2));
	copy(vi.begin(),vi.end(),front_inserter(li3));

	VIEW_SEQ(li1);
	VIEW_SEQ(li2);
	VIEW_SEQ(li3);
}
