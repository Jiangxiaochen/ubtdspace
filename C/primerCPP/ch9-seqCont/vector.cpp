#include <iostream>
#include <vector>

using namespace std;

class NoDefault
{
public:
	NoDefault(int a) : data(a) {}
private:
	int data;
};


int main()
{
	NoDefault init(1234);
	vector<NoDefault> v(10, init);

	vector<int> vi;
	cout << vi.max_size() << endl;

}
