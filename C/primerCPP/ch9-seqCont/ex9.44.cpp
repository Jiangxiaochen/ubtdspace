#include "mycpp.h"

void repalce_with(string &s, const string &oldVal, const string &newVal)
{
	auto s_len = s.size();
	auto o_len = oldVal.size();
	auto n_len = newVal.size();
	decltype(s_len) i;
	for(i = 0; i < s_len - o_len; i++){
		string tmp(s,i,o_len);
		if(oldVal == tmp){
			s.replace(i,o_len,newVal);
			i += n_len;
		}
	}

}

int main()
{
	string s("thoho   thruthothruaaahruhoaab");
	repalce_with(s,"tho","though");
	cout << s << endl;
	repalce_with(s,"thru", "through");
	cout << s << endl;
	return 0;
}
