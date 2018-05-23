#include <mycpp.h>

int main()
{
	set<int> s;
	auto x1 = s.insert(1);
	auto x2 = s.insert(1);

	cout << x1.second << endl;
	cout << x2.second << endl;

	map<string,size_t> word_count;
	string word;
	while(cin >> word){
		auto ret = word_count.insert({word,1});
		if(!ret.second){
			++ret.first->second;
		}
	}

	VIEW_MAP(word_count);

	multimap<string,string> authors;
	authors.insert({"jxc","abc"});
	authors.insert({"jxc","abd"});
	VIEW_MAP(authors);

	auto x3 = authors["jxc"];
	VIEW_MAP(x3);
}
