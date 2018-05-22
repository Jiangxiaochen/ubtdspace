#include <mycpp.h>

string vc2str(vector<char> &vc)
{
	string s(vc.begin(),vc.end());
	return s;
}

int main()
{
	vector<char> vc = {
		'a','b','c'
	};
	
	string s = vc2str(vc);

	VIEW_SEQ(vc);
	VIEW_SEQ(s);
}
