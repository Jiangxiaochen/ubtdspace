#include "mycpp.h"

class StrBlob
{
public:
	typedef vector<string> vec_str;
	typedef vec_str::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const {return data->size();}
	bool empty() const {return data->empty();}

	void push_back(const string &t){data->push_back(t);}
	void pop_back();

	string &front();
	string &back();
private:
	shared_ptr<vector<string>> data;
	void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vec_str>()){}
StrBlob::StrBlob(initializer_list<string> il):
	data(make_shared<vec_str>(il)){}
void StrBlob::check(size_type i, const string &msg) const
{
	if(i >= data->size()) throw out_of_range(msg);
}

string &StrBlob::front()
{
	check(0,"front on empty StrBlob");
	return data->front();
}

string &StrBlob::back()
{
	check(0,"back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0,"pop_back on empty StrBlob");
	data->pop_back();
}


class StrBlobPtr
{
public:
	StrBlobPtr() : curr(0){}
	StrBlobPtr(StrBlob &a, size_t sz = 0) : 
		wptr(a.data), curr(sz){}
	string &deref() const;
	StrBlobPtr &incr();
private:
	shared_ptr<vector<string>> check(size_t,const string &) const;
	weak_ptr<vector<string>> wptr;
	size_t curr;
};

shared_ptr<vector<string>> StrBlobPtr::check(size_t i,const string &msg) const
{
	auto ret = wptr.lock();
	if(!ret) throw runtime_error("unbound StrBlobPtr");
	if(i >= ret->size()) throw out_of_range(msg);
	return ret;
}







int main()
{

}
