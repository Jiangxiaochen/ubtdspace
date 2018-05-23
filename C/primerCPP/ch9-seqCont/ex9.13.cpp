#include <list>
#include <vector>

using namespace std;

int main()
{
	list<int> li;
	vector<double> vd(li.begin(),li.end());
	vector<int> vi;
	vector<double> vd2(vi.begin(),vi.end());
}
