#include <string.h>


#define DUMBCOPY for(i=0;i<65536;i++) \
					   destination[i]=source[i]
#define SMARTCOPY	memcpy(destination,source, 65536)

#ifdef DUMB
#define COPY DUMBCOPY
#else
#define COPY SMARTCOPY
#endif

main()
{
	char source[65536],destination[65536];
	int i,j;
	for(j=0;j<100;j++) COPY;
}
