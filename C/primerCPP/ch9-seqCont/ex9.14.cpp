#include <string>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main()
{
	list<char *> lcp1{
		"abc", "cde", "acddd"
	};
	vector<string> vs1(lcp1.begin(),lcp1.end());
	for(auto s : vs1) cout << s << endl;
}
