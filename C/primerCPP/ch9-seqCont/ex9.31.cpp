#include "mycpp.h"


void remove_evens_and_double_odds(forward_list<int> &data)
{
	auto cur = data.begin();
	auto prv = data.before_begin();

	while(cur != data.end()){
		if(*cur & 0x1){
			cur = data.insert_after(prv,*cur);
			advance(cur,2);
			advance(prv,2);
		}else{
			cur = data.erase_after(prv);
		}
	}
}

int main()
{
	forward_list<int> fli = {
		0,1,2,3,4,5,6,7,8,9
	};

	remove_evens_and_double_odds(fli);

	VIEW_SEQ(fli);
}
