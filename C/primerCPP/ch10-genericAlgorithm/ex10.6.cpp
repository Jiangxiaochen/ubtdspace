#include "mycpp.h"

int main()
{
	int arr[] = {
		1111,2,2,12,3,1,43,1,12,5,6,6,12
	};

	fill_n(arr,sizeof(arr)/sizeof(int),0);

	VIEW_SEQ(arr);
}
