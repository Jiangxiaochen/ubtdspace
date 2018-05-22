#include "mycpp.h"

int main()
{
	vector<int> vi = {
		12993,12949,9,11,1,998
	};
	int val = 9;
	auto result = find(vi.cbegin(),vi.cend(),val);
	cout << val << (result == vi.cend() ? " is not present" : " is present") << endl;
	
	int arr[] = {
		1,2,3,4,5,6
	};
	printf("%p %p %p\n", arr+5,arr+6,end(arr));
	auto r2 = find(begin(arr),end(arr),val);
	cout << r2 << endl;
	cout << val << (r2 == end(arr) ? "not found" : "found") << endl;
	
	//不包含arr+2的元素
	auto r3 = find(arr+1,arr+2,val);
	cout << r3 << endl;
	cout << val << (r3 == arr+2 ? "not found" : "found") << endl;
}
