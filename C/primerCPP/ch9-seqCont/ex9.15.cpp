#include <vector>
#include <iostream>
using namespace std;

bool vec_equal(vector<int> &vi1, vector<int> &vi2)
{
	return vi1 == vi2;
}


int main()
{
	vector<int> vi1 = {
		1,2,3,4
	};
	vector<int> vi2 = {
		1,2,3,4
	};
#ifdef DBG
	vi2.push_back(1);
#endif

	if(vec_equal(vi1,vi2)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}
