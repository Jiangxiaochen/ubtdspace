#include "mycpp.h"

vector<int> *func()
{
	return new vector<int>;
}

void read(vector<int> *pvi)
{
	int a;
	while(cin >> a){
		pvi->push_back(a);
	}
}

void write(vector<int> *pvi)
{
	VIEW_SEQ(*pvi);
}


int main()
{
	auto pvi = func();
	read(pvi);
	write(pvi);
	delete pvi;
}
