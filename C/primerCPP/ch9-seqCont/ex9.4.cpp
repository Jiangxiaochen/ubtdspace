#include "mycpp.h"

bool find(vector<int> &v, int val)
{
	auto be = v.begin();
	auto en = v.end();
	while(be != en){
		if(*be == val) return true;
		be++;
	}
	return false;
}

int main(int argc, char **argv)
{
	vector<int> v;
	for(int i = 0; i < 10; i++) v.push_back(i);
	if(find(v,atoi(argv[1]))) cout << "find" << endl;
	else cout << "not find" << endl;
}
