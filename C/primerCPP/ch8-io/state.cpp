#include <iostream>
using namespace std;

int main()
{
	int a;
	while(cin >> a){
		if(cin.rdstate() == ios_base::goodbit) cout << "goodbit" << endl;
	}
	auto old_state = cin.rdstate();
	if(old_state == ios_base::eofbit) cout << "eofbit" << endl;
	if(old_state == istream::failbit) cout << "failbit" << endl;
	if(old_state == istream::badbit) cout << "badbit" << endl;
	
	cin.clear(cin.rdstate()&~cin.failbit&~cin.badbit);
	cin >> a;
	cin >> a;
	cout << a << endl;	
}
