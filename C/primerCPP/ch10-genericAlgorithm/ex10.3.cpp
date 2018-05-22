#include "mycpp.h"

int main()
{
	vector<int> vi = {
		1,2,3,4
	};

	cout << accumulate(vi.begin(),vi.end(),0) << endl;

	vector<double> vd = {
		1.1,2.1,3.1,4.1
	};
	cout << accumulate(vd.begin(),vd.end(),0.0f) << endl;
	
}
