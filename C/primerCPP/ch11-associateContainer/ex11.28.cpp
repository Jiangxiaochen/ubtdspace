#include "mycpp.h"

int main()
{
	map<string,vector<int>> msv;
	msv.insert(make_pair("abc",vector<int>{'a','b','c'}));
	msv.insert(make_pair("def",vector<int>{'d','e','f'}));
	msv.insert(make_pair("ghi",vector<int>{'g','h','i'}));
	
	auto it = msv.find("abc");
	if(it != msv.end()){
		VIEW_SEQ(it->second);
	}
}
