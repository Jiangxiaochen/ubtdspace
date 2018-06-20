#include "mycpp.h"

class DebugDelete{
public:
	DebugDelete(ostream &s = cerr) : os(s){}
	template <typename T> void operator() (T *p) const{
		os << "deleting unique_ptr" << endl;
		delete p;
	}
private:
	ostream &os;
};


template <typename T> class Blob{
	template <typename It> Blob(It b, It e);
};

template <typename T>
template <typename It>
Blob<T>::Blob(It b,It e) : data(make_shared<vector<T>>(b,e));
