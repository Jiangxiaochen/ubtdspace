#include <fstream>
#include <iostream>
#include <cassert>
using namespace std;

struct st
{
	int a;
	double b;
};

#define FILE_NAME "data"

int main()
{
#ifdef READ
	ifstream in(FILE_NAME);
	assert(in.is_open());
	st tmp;
	while(in >> tmp.a >> tmp.b){
		cout << tmp.a << tmp.b << endl;
	}
#endif

#ifdef WRITE
	ofstream ofs(FILE_NAME);
	st tmp;
	for(int i = 0; i < 10; i++){
		tmp.a = i;tmp.b=i+0.1;
		ofs << tmp.a << tmp.b;
	}
	ofs.close();
#endif

#ifdef mode
	

#endif
}
