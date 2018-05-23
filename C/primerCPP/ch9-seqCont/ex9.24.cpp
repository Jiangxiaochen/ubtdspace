#include "mycpp.h"

int main()
{
	vector<int> vi = {
		1
	};
	vi.at(0) = 1;
	cout << vi.at(0) << endl;
	vi[0] = 2;
	cout << vi[0] << endl;
	vi.front() = 3;
	cout << vi.front() << endl;
	*(vi.begin()) = 4;
	cout << *(vi.begin()) << endl;
}
