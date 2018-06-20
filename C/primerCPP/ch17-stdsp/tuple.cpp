#include "mycpp.h"

int main()
{
	tuple<size_t,size_t,size_t> threeD;
	tuple<string,vector<double>,int,list<int>>
		someVal("constants",{
				3.14,2.718
				},42,{
				0,1,2,3,4,5
				});

	auto item = make_tuple("112",111,20.0001);


	auto book = get<0>(item);
	get<2>(item) *= 0.8;
}
