#include "mycpp.h"

void end_connection(int * a)
{
	cout << "hehe" << endl;
}

int main()
{
	shared_ptr<int> p(new int, end_connection);
}
