#include "mycpp.h"

int main()
{
	forward_list<int> flst = {
		0,1,2,3,4,5,6,7,8,9
	};
	forward_list<int> flst2(flst);

	auto prev = flst.before_begin();
	auto curr = flst.begin();

	while(curr != flst.end()){
		if(*curr % 2) curr = flst.erase_after(prev);
		else{
			prev = curr;
			++curr;
		}
	}
	VIEW_SEQ(flst);

	prev = flst2.before_begin();
	curr = flst2.begin();
	while(curr != flst2.end()){
		if((*curr % 2) == 1)
	}
}
