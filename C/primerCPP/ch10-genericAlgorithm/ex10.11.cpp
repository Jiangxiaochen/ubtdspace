#include "mycpp.h"

int isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

int main(int argc, char **argv)
{
	vector<string> vs = {
		"abc","abd","bcd","efg","1111","222222","33"
	};

	assert(argc==2);
	string flag(argv[1]);
	if(flag == "default"){
		sort(vs.begin(),vs.end());
	}else if(flag == "stable"){
		stable_sort(vs.begin(),vs.end(),isShorter);
	}else if(flag == "shorter"){
		sort(vs.begin(),vs.end(),isShorter);
	}

	VIEW_SEQ(vs);
}
