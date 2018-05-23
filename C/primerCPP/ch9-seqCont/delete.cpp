#include "mycpp.h"

#define view(vi) \
	{\
		cout << "---------------" << endl;\
		for(auto i : vi) cout << i << endl;\
	}


int main()
{
	vector<int> vi = {
		1,2,3
	};
	view(vi);
	vi.erase(--vi.end());
	view(vi);
	//vi.pop_front();//has no member pop_front
	vi.pop_back();
	view(vi);
	vi.erase(vi.begin(),vi.end());
	view(vi);
	vi.push_back(4);
	vi.push_back(6);
	vi.push_back(8);
	view(vi);
	auto iter = vi.erase(vi.begin(),--vi.end());
	view(vi);
	cout << "*iter: " << *iter << endl;
}
