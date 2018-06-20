#include "instantCtrl.h"

template <typename T>
T jiajia(T a){
	cout << "jiajia" << endl;
}



void oth(int a, int b)
{
	cout << "oth" << endl;
	foo(a,b);
	jiajia(1);
	cout << "ggg" << endl;
}
