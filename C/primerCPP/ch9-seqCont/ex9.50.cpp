#include "mycpp.h"

double sum(const vector<string> &vs)
{
	auto vs_size = vs.size();
	double ret = 0;
	decltype(vs_size) p,i = 0;
	for(; i < vs_size; i++){
		p = 0;
		try{
			ret += stod(vs[i],&p);
		}catch(invalid_argument e){
			printf("%s\n",e.what());
		}
		if(p != 0) printf("%s %lu\n",vs[i].c_str(),p);
	}
	return ret;
}


int main()
{
	vector<string> vs = {
		"1.23fka","1","2.0din","89hkasd","aad8d"
	};
	cout << sum(vs) << endl;
}
