#include "mycpp.h"

class node {};
class type : public node {};
class fct : public type {};
class gen : public type {};

typedef type *ptype;
typedef fct *pfct;

int main()
{
	ptype pt;
	pfct pf = pfct(pt);
}
