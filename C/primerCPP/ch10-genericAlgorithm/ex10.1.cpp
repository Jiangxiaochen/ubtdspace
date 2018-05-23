#include "mycpp.h"

void f1(const vector<int> &vi, const int val)
{
	cout << count(vi.begin(),vi.end(),val) << endl;
}

int main(int argc, char **argv)
{
	vector<int> vi = {
		1,1,1,1,22,22,3,4,2,4,2,0,1,9
	};

	assert(argc==2);
	int val = atoi(argv[1]);
	f1(vi,val);
}
