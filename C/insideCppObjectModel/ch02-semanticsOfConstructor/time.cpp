#include "mycpp.h"
#include "sys/time.h"

int main()
{
	time_t now_second = time(NULL);
	cout << ctime(&now_second) << endl;

	struct timeval tv;
	//obsolete
	if(gettimeofday(&tv,NULL) == 0) cout << tv.tv_sec << " " << tv.tv_usec << endl;

	//
	struct timespec ts;
	if(clock_gettime(CLOCK_REALTIME_COARSE,&ts) == 0) cout << ts.tv_sec << " " << ts.tv_nsec << endl;
}
