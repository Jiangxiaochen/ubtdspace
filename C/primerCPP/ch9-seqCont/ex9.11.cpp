#include <vector>
using std::vector;

int main()
{
	vector<int> v1;
	vector<int> v2(v1);
	vector<int> v3 = v1;
	vector<int> v4{
		1,2,3
	};
	vector<int> v5 = {
		1,2,3
	};
	vector<int> v6(v5.begin(),v5.end());
	vector<int> v7(5);
	vector<int> v8(5,1); 
}
