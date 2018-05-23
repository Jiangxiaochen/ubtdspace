#include "mycpp.h"

int findInt(const vector<int> &vi, const string &s)
{
	auto sz = s.size();
	auto it = find_if(vi.begin(),vi.end(),[sz](const int a){
			return a >= sz;
			});
	if(it != vi.end()) return *it;
	return -1;
}

int main()
{
	vector<int> vi = {
		1,2,3,4,5,6,-10,7
	};
	cout << findInt(vi,"abc") << endl;
}
