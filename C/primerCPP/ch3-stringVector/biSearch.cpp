#include <iostream>

using std::cout;
using std::endl;


int main()
{
	vector<int> iVec;

	for(int i = 0; i < 15; i++) iVec.push_back(i);

	auto beg = iVec.begin(), end = iVec.end();
	auto mid = iVec.begin() + (end - beg)/2;

	while(mid != end && *mid != 9){
		if(9 < *mid) end = mid;
		else beg = mid + 1;

		mid = beg + (end - beg)/2;
	}
}
