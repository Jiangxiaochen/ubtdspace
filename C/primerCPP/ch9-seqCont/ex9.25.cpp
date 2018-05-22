#include "mycpp.h"

int main()
{
	list<int> li = {
		1,2,3,4,5
	};
	li.erase(li.begin(), li.begin());
	VIEW_SEQ(li);

	list<int> li2(li);
	li2.erase(li2.begin(), li2.end());
	VIEW_SEQ(li2);

	li.erase(li.end(),li.end());
	VIEW_SEQ(li);
}
