#ifndef _JXC_LIST_
#define _JXC_LIST_

#define GENERIC_NODE(type)\
	typedef struct type##_node\
	{\
		type value;\
		struct type##_node *next;\
	} type##_node


GENERIC_NODE(float);
GENERIC_NODE(int);


#endif
