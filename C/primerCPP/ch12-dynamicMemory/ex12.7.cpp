#include "mycpp.h"

typedef vector<int> vi_t;

shared_ptr<vi_t> func()
{
	return make_shared<vi_t>();
}
void read(const shared_ptr<vi_t> &sp)
{
	int a;
	while(cin >> a){
		sp->push_back(a);
	}
}

void write(const shared_ptr<vi_t> &sp)
{
	VIEW_SEQ(*sp);
}


int main()
{
	auto pvi = func();
	read(pvi);
	write(pvi);
}
