#include <iostream>
#include <string>
using namespace std;

const string &shorterString(const string &s1, const string &s2)
{
	return s1.size() <= s2.size() ? s1 : s2;
}

const string &shorterString(string &s1, string &s2)
{
	auto &r = shorterString(const_cast<const string&>(s1),
							const_cast<const string&>(s2));
	return const_cast<string&>(r);
}
