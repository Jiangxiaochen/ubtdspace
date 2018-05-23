#include "mycpp.h"

void find_insert(forward_list<string> &flst, const string &s1, const string &s2)
{
	auto be = flst.begin();
	auto pr = flst.before_begin();
	while(be != flst.end()){
		if(*be == s1){
			be = flst.insert_after(be, s2);
			break;
		}
		pr = be;
		be++;
	}

	if(be == flst.end()) flst.insert_after(pr, s2);
}

int main()
{
	forward_list<string> flst1 = {
		"1","2","3","4"
	};
	find_insert(flst1,"5","i");
	VIEW_SEQ(flst1);
}
