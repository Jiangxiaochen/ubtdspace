#include "mycpp.h"

void replace(string &s, const string &oldVal, const string &newVal)
{
	auto iter = s.begin();
	auto len = oldVal.size();

	while(iter <= (s.end() - len)){
		if(oldVal == string{iter,iter+len}){
			iter = s.erase(iter,iter+len);
			iter = s.insert(iter,newVal.begin(),newVal.end());
			iter += newVal.size();
		}else{
			iter++;
		}
	}
}

int main()
{
	string s("thoho   thruthothruaaahruhoaab");
	replace(s,"tho","though");
	cout << s << endl;
	replace(s,"thru", "through");
	cout << s << endl;
	return 0;
}
