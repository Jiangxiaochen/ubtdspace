#include "mycpp.h"

int main()
{
	//指向一个值为42的int
	shared_ptr<int> p3 = make_shared<int>(42);
	shared_ptr<int> p4 = make_shared<string>(10,'9');
	shared_ptr<int> p5 = make_shared<int>();
	//拷贝和赋值
	auto p = make_shared<int>(42);
	auto q(p);
}
