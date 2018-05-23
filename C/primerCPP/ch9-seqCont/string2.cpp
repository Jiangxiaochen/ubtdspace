#include "mycpp.h"

int main()
{
	string s("abcdefghijklmn");
	s.insert(s.size(), 5, '!');
	cout << s << endl;
	s.erase(s.size() - 5, 5);

	cout << s << endl;

	s.insert(s.size(), " 4th ed.");
	s.append(" 5th ed.");
	cout << s << endl;

	s.replace(11,3,"JXCCC");
	cout << s << endl;
}
