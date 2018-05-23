#include "mycpp.h"

int main()
{
	vector<int> vi = {
		1,2,3,4
	};

	auto iter = vi.begin();
	while(iter != vi.end())
		if(*iter & 0x1)
			iter = vi.insert(iter,*iter),++iter;

	VIEW_SEQ(vi);
}
