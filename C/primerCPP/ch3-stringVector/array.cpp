#include <iostream>
#include <iterator>
using namespace std;
int ia[] = {1,2,3,4,5,6,7};

int main()
{
	int *beg = begin(ia);
	int *last = end(ia);

	while(beg != last) std::cout << *beg++ << std::endl;
}
