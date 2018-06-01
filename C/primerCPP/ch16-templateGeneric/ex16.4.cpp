#include "mycpp.h"

template <typename T, typename ItT>
ItT find(ItT it1, ItT it2, const T &val)
{
	while(it1 != it2){
		if(*it1 == val){
			break;
		}
		it1++;
	}
	return it1;
}

int main()
{
	vector<int> vi{
		1,2,3,6,5,1
	};
	auto it = ::find(vi.begin(),vi.end(),5);
	cout << 5 << ((it != vi.end()) ? " find" : " not find") << endl;

	list<string> ls{
		"abc","abc","efg"
	};

	auto it2 = ::find(ls.begin(),ls.end(),"abc");
	
	cout << "abc" << ((it2 != ls.end()) ? " find" : " not find") << endl;
}
