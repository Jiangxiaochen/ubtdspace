#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>
// #include "/home/linux/jxc-workspace/csapp.h"

unsigned int snooze(unsigned int secs){
    unsigned int left_time = sleep(secs);
	printf("Slept for %d of %d secs\n", secs - left_time, secs);
	return left_time;
}

int main(int argc, char const *argv[])
{
	unsigned long second;
	printf("sizeof time_t: %d\n", sizeof(unsigned long));
	printf("sec1: %d\n", time(&second));
	snooze(5);
	printf("sec2: %d\n", time(&second));
	return 0;
}