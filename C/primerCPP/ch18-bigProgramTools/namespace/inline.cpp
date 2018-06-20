#include "mycpp.h"

namespace cplusplus_primer{
	namespace third_ed{
		string NAME("CP3");
	}
	inline namespace forth_ed{
		string NAME("CP4");
	}
}

int main()
{
	cout << cplusplus_primer::NAME << endl;
	cout << cplusplus_primer::third_ed::NAME << endl;
	cout << cplusplus_primer::forth_ed::NAME << endl;
}
