#include <mycpp.h>

int main()
{
	string s;
	s.reserve(100);
	char c;
	while(cin >> c){
		s.push_back(c);
	}

	VIEW_SEQ(s);
}
