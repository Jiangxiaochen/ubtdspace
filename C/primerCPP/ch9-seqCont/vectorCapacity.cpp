#include <mycpp.h>

int main()
{
	vector<int> vi;
	SEQ_SIZE(vi);
	vi.reserve(10);
	SEQ_SIZE(vi);
	vi.shrink_to_fit();
	SEQ_SIZE(vi);

	int num = 20;
	while(num--){
		vi.push_back(num);
		SEQ_SIZE(vi);
	}
}
