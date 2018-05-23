#include "mycpp.h"

int main()
{
	string s;
	int i;
	vector<pair<string,int>> vpsi;
	while(cin >> s >> i){
		vpsi.push_back(make_pair(s,i));
	}
	VIEW_MAP(vpsi);
}
