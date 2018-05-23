#include "mycpp.h"

int main()
{
	vector<int> vi = {
		1,2,1,3,4,4,3,5,5,5,6
	};
	sort(vi.begin(),vi.end());
	vector<int> vi2;
	unique_copy(vi.begin(),vi.end(),inserter(vi2,vi2.begin()));

	VIEW_SEQ(vi);
	VIEW_SEQ(vi2);
}
