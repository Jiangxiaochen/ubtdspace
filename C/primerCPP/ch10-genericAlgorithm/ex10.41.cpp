#include "mycpp.h"

int main()
{
	vector<int> vi = {
		988231,123,1,12,34,5,6,1
	};
	VIEW_SEQ(vi);
	replace(vi.begin(),vi.begin()+2,123,0);
	VIEW_SEQ(vi);
	replace_if(vi.begin(),vi.end(),[](int a){
				return a == 1;
			},-1);
	VIEW_SEQ(vi);

	vector<int> vi2;
	replace_copy(vi.begin(),vi.end(),inserter(vi2,vi2.begin()),-1,-2);
	VIEW_SEQ(vi2);
	replace_copy_if(vi.begin(),vi.end(),inserter(vi2,vi2.begin()),[](int a){
			return a == -1;
			},-3);
	VIEW_SEQ(vi2);
}
