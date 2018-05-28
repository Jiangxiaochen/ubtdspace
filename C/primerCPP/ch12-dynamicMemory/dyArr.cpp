#include "mycpp.h"

int main()
{
	unique_ptr<int[]> u(new int[10]);
	shared_ptr<int> s(new int[10],[](int*p){cout<<"hehe"<<endl,delete [] p;});

}
