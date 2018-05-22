#include "mycpp.h"

int main()
{
	vector<string> vs = {
		"1939kcd","kdi89ajafdskjklajd","idiai"
	};
	size_t sz = 6;
	auto cnt = count_if(vs.begin(),vs.end(),[sz](const string &s){
			return s.size() >= 6;
			});

	cout << cnt << endl;
}
