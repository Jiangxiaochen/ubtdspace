#include "mycpp.h"

int main()
{
	vector<int> vi;
	auto it = back_inserter(vi);
	int n = 10;
	while(n--){
		*it = n;
	}
	VIEW_SEQ(vi);
}
