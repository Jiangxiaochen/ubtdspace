#include "mycpp.h"

class Basket{
public:
	void add_item(shared_ptr<Quote> &sale){
		items.insert(sale);
	}
	double total_receipt(ostream&) const;
private:
	static bool compare(shared_ptr<Quote> &lhs, shared_ptr<Quote> &rhs){
		return lhs->isbn() < rhs->isbn();
	}
	multiset<shared_ptr<Quote>,decltype(compare)*> items(compare);
};


