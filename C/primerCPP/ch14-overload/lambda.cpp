#include "mycpp.h"

class ShorterString{
public:
	bool operator()(const string &s1, const string &s2) const{
		return s1.size() < s2.size();
	}
};

int main()
{
	vector<string> vs = {
		"abc","abd","aaaa","bb","c"
	};
	auto vs1 = vs;
	stable_sort(vs.begin(),vs.end(),[](const string &a, const string &b)->bool{
			return a.size() < b.size();
			});
	VIEW_SEQ(vs);
	VIEW_SEQ(vs1);
	stable_sort(vs1.begin(),vs1.end(),ShorterString());
	VIEW_SEQ(vs1);
}

