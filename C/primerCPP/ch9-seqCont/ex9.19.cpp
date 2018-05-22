#include "mycpp.h"

void copyLi2di(list<int> &li, deque<int> &di1, deque<int> &di2)
{
	for(auto i : li){
		if((i%2) == 0) di1.push_back(i);
		else di2.push_back(i);
	}
}

int main()
{
	list<int> li = {
		1,2,3,4,5
	};
	deque<int> di1;
	deque<int> di2;

	copyLi2di(li,di1,di2);

	for(auto i : di1) cout << i << endl;
	for(auto i : di2) cout << i << endl;
}
