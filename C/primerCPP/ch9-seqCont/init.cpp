#include "mycpp.h"
#include <list>
#include <deque>
#include <forward_list>
using namespace std;

int main()
{
	list<string> athors = {
		"Milton","Shakespeare","Austen"
	};
	vector<const char *> arcticles = {
		"a", "an","the"
	};

	list<string> list2(athors);
	//deque<string> authors(authors); //error: container type not match
	forward_list<string> words(arcticles.begin(),arcticles.end());
}
