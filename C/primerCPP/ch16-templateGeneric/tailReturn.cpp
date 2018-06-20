#include "mycpp.h"

template <typename It>
auto fcn(It beg, It end) -> decltype(*beg)
{
	return *beg;
}

template <typename It>
auto fcn2(It beg, It end) -> typename remove_reference<decltype(*beg)>::type
{
	return *beg;
}


int main()
{
	vector<int> vi{
		1,2,3
	};
	auto &au1 = fcn(vi.begin(),vi.end());
	au1 = 10;
	VIEW_SEQ(vi);
	
	auto au2 = fcn2(vi.begin(),vi.end());
	au2 = 20;
	VIEW_SEQ(vi);
}
