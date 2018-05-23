#include "mycpp.h"

int main()
{
	multimap<int,int> mii{
		make_pair(1,1),	
		make_pair(1,11),	
		make_pair(2,1),	
		make_pair(3,1),	
	};

	VIEW_MAP(mii);

	for(auto beg = mii.lower_bound(1),
			end = mii.upper_bound(1);
			beg != end; ++beg){
		cout << beg->second << endl;
	}
}
