#include "mycpp.h"

int main()
{
	vector<int> iv = {
		1,2,3,2,5,2,2,2,9
	};
	int some_val = 2;
	vector<int>::iterator iter = iv.begin(),
	                      mid = iv.begin() + iv.size()/2;
	while (iter != mid && iter != iv.end()) {
	  if (*iter == some_val) {
	    iter = iv.insert(iter, 2 * some_val);
	    ++iter;  // Increament to point to the original value
	  }
	  ++iter;  // Increment to point to the next value
	  mid = iv.begin() + iv.size()/2;
	  if(mid < iter) break; 
	}

	for(auto i : iv) cout << i << endl;
}

/*
1,2,3,2,(5),2,2,2,9
1,4,2,3`,2,(5),2,2,2,9
1,4,2,3,4,(2),5`,2,2,2,9
*/
