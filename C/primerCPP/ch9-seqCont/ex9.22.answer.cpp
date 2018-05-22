#include <iostream>
#include <vector>

void double_and_insert(std::vector<int>& v, int some_val)
{
    auto mid = [&]{ return v.begin() + v.size() / 2; };
    for (auto curr = v.begin(); curr != mid(); ++curr)
        if (*curr == some_val)
            ++(curr = v.insert(curr, 2 * some_val));
}

int main()
{
    //std::vector<int> v{ 1, 9, 1, 9, 9, 9, 1, 1 };
	std::vector<int> v{
		1,2,3,2,5,2,2,2,9
	};
    double_and_insert(v, 2);

    for (auto i : v) 
        std::cout << i << std::endl;
}
