#include <string>
typedef double Money;

class Account
{
public:
	Money balance() {return bal;}
private:
//	typedef double Money; //error
	Money bal;
};


typedef std::string Type;
Type initVal();
class Exercise
{
public:
	typedef double Type;
	Type setVal(Type);
	Type initVal();
private:
	int val;
};

Exercise::Type Exercise::setVal(Type parm)
{
	val = parm + initVal();
	return val;
}
