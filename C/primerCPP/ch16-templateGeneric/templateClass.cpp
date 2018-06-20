#include "mycpp.h"

template<typename T>
class Blob{
public:
	using value_type=T;
	using size_type=typename vector<T>::size_type;

	Blob();
	Blob(initializer_list<T> il);

	size_type size() const {
		return data->size();
	}
	bool empty() const{
		return data->empty();
	}
	void push_back(const T &t) {
		data->push_back(t);
	}
	void push_back(T &&t){
		data->push_back(std::move(t));
	}
	void pop_back();
	T &back();
	T &operator[](size_type i);
private:
	shared_ptr<vector<T>> data;
	void check(size_type i, const string &msg) const;
};


int main()
{
	Blob<int> ia;
	Blob<int> ia2 = {
		0,1,2,3,4
	};

}

template <typename T>
void Blob<T>::check(size_type i, const string &msg) const
{
	if(i >= data->size()) throw out_of_range(msg);
}




