#include <iostream>
int height = 11;

class Scope
{
public:
	//param shadows member
	void test1(int height)
	{
		std::cout << height << std::endl;
	}
	//
	void test2(int height)
	{
		std::cout << Scope::height << std::endl;
		std::cout << this->height << std::endl;
	}
	void test3(int height)
	{
		std::cout << ::height << std::endl;
	}

private:
	int height = 5;
};

int main()
{
	Scope s;
	s.test1(3);
	s.test2(3);
	s.test3(3);
}
