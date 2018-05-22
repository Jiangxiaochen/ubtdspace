#include "mycpp.h"

bool func(const string &s)
{
	return s.size() >= 5;
}

int main()
{
	vector<string> vs = {
		"abc","cdefg","efghijkl","a"
	};

	auto it = partition(vs.begin(),vs.end(),func);
	for(auto be = vs.begin(); be != it; be++) cout << *be << endl;

	VIEW_SEQ(vs);
}
