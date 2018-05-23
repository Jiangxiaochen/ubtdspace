#include "mycpp.h"

int main()
{
	list<string> ls;
	auto iter = ls.begin();
	string word;
	while(cin >> word) iter = ls.insert(iter,word);
	for(auto s : ls) cout << s << endl;

	vector<int> vi = {
		7,8,9
	};
	list<int> li = {
		1,2,3,4,5,6
	};
	vi.insert(++vi.begin(),li.begin(),--(--li.end()));
	for(auto s : vi) cout << s << endl;
}
