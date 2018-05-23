#include "mycpp.h"

int main()
{
	istream_iterator<int> int_it(cin);
	istream_iterator<int> int_eof;
//	ifstream in("afile");
//	istream_iterator<string> str_it(in);
	vector<int> vi;
	while(int_it != int_eof){
		vi.push_back(*int_it++);
	}
	VIEW_SEQ(vi);

	string s;
	cin.clear();
	getline(cin,s);
	cin.clear();
	istream_iterator<int> int_it2(cin),eof;
	vector<int> vec(int_it2,eof);
	VIEW_SEQ(vec);

	cin.clear();
	getline(cin,s);
	istream_iterator<int> in(cin),eof2;
	cout << accumulate(in,eof2,0) << endl;
}
