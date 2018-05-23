#include "mycpp.h"

int ia[] = {
	0,1,1,2,3,5,8,13,21,55,89
};

int main()
{
	vector<int> vi(begin(ia),end(ia));
	list<int> li(begin(ia),end(ia));

	auto li_be = li.begin();
	while(li_be != li.end()){
		if(*li_be % 2) li_be = li.erase(li_be);
		else li_be++;
	}
	VIEW_SEQ(li);

	auto iter = vi.begin();
	while(iter != vi.end()){
		if(!(*iter%2)) iter = vi.erase(iter);
		iter++;
	}
	VIEW_SEQ(vi);
}
