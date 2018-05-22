#include "mycpp.h"

int main()
{
	vector<string> vs = {
		"the","quick","red","fox","jumps","over","the",
		"slow","red","turtle"
	};

	sort(vs.begin(),vs.end());

	VIEW_SEQ(vs);

	auto end_unique = unique(vs.begin(),vs.end());

	VIEW_SEQ(vs);

	vs.erase(end_unique,vs.end());

	VIEW_SEQ(vs);
}
