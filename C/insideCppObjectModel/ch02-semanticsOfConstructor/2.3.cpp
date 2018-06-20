#include "mycpp.h"

class test{
	friend test foo(double);
public:
	test(){
		memset(array,0,100*sizeof(double));
	}
	inline test(const test &t)
	{
		memcpy(this,&t,sizeof(test));
		printf("called\n");
	}

public:
	double array[100];
};

test foo(double val)
{
	test local;
	local.array[0] = local.array[99] = val;
	return local;
}

int main()
{
	double r;
	using timespec = struct timespec;
	timespec ts0,ts1;
	clock_gettime(CLOCK_REALTIME,&ts0);
	for(int cnt = 0; cnt < 200000000; cnt++){
		test t = foo(double(cnt));
		r = t.array[99];
	}
	clock_gettime(CLOCK_REALTIME,&ts1);
	cout << ts1.tv_sec - ts0.tv_sec << "s";
	cout << ts1.tv_nsec - ts0.tv_nsec << "ns" << endl;
	cout << r << endl;
	return 0;
}
