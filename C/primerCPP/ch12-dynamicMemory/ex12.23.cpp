#include "mycpp.h"

void func(const string &s1, const string &s2)
{
	string s = s1 + s2;
	char *pc = new char[s.size()];
	for(int i = 0; i < s.size(); i++){
		pc[i] = s[i];
	}


}

int main()
{
	func("aaaa","bbbb");
}
