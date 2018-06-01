#include "mycpp.h"

template <typename T>
int compare(const T &v1, const T &v2)
{
	if(v1 < v2) return -1;
	if(v1 > v2) return 1;
	return 0;
}

template <unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M])
{
	return strcmp(p1,p2);
}

class A{
	int a;
};
int main()
{
	cout << compare(1.0,1.2) << endl;
	cout << compare(vector<string> 
			{
			"a","b","c"
			},
			vector<string>{
			"c","d","e"
			}) << endl;
	
	cout << compare("abc","aa") << endl;
	cout << compare(A(),A()) << endl;
}
