#include "mycpp.h"

enum color {
	red,yellow,green
};

enum stoplight{
//	red,yellow,green //名字冲突
};

enum class peppers{
	red,yellow,green
};//正确，枚举成员被隐藏了

color eyes = green;
color hair = color::red;
peppers p2 = peppers::red;

enum class intTypes{
	charTyp = 8, shortTyp = 16, intTyp = 16
};

intTypes it2 = (intTypes)11;	//需要强制转化
intTypes it = intTypes::shortTyp;

enum shortVal : unsigned short{
	HAHA = 1234
};

void ff(intTypes it)
{
	cout << "intTypes " << it << endl;
}

void ff(int a)
{
	cout << "int " << a << endl;
}

int main()
{
//	int a = intTypes::charTyp;	//限定作用域的不能转换
	int a = shortVal::HAHA;
	int b = (int)it;
	cout << a << endl, cout << b << endl;
	ff(1314);
	ff(intTypes::charTyp);
}
