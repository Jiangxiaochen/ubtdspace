#include "mycpp.h"

int main()
{
	vector<int> v1;
	const vector<int> v2;
	v1.push_back(1);
//	v2.push_back(2); //error
	auto it1 = v1.begin();
	auto it2 = v2.begin();
	auto it3 = v1.cbegin();
	auto it4 = v2.cbegin();
}
