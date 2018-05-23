#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(void)
{
	vector<int> ivec;
	for(int i = 0; i < 10; i++) ivec.push_back(i);

	printf("%lu\n", ivec.size());

	for(auto &ix : ivec) cout << ix << endl;


	const vector<int> ciVec{1,2,3,4,5,6,7,8,9,10};
//	for(int i = 0 ; i < 10; i++) ciVec.push_back(i);

	for(auto b = ciVec.begin(); b != ciVec.end(); b++){
		cout << *b << endl;
	}
}
