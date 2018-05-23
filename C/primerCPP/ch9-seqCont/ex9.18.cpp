#include "mycpp.h"

int main()
{
	string s;
//	deque<string> dqs;
	list<string> dqs;
	while(cin >> s){
		dqs.push_back(s);
	}
	for(auto s : dqs) cout << s << endl;
}
