#include "jxcutils.h"
#include <sys/time.h>

/**
 * Returns the current time in microseconds.
 */
uint64_t getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * 1000000 + currentTime.tv_usec;
}

uint64_t getNanoTime()
{
	struct timespec ts;
	int result = clock_gettime(CLOCK_REALTIME_COARSE,&ts);
	if(result == 0){
		return ts.tv_sec * 1000000 + ts.tv_nsec;
	}
	return 0;
}

void show_bytes(void *start, unsigned len)
{
	printf("0x");
	unsigned char *start1 = (unsigned char *)start;
	for(int i = 0; i < len; i++){
		printf("%.2x", start1[i]);
	}
	printf("\n");
}

void show_number(void *start, unsigned len)
{
	unsigned char *start1 = (unsigned char *)start;
	printf("0x");
	while(len--)
	{
		printf("%.2x",start1[len]);
		if(len == 0) break;
	}
	printf("\n");

}

void show_line()
{
	printf("-------------------------------\n");
}

int show_endian()
{
	unsigned short a = 0x1234;
	unsigned char b = *(unsigned char *)&a;
	if(b == 0x12) return big_endian;
	if(b == 0x34) return small_endian;
	return -1;
}

void show_bits(void *start, unsigned len)
{
	unsigned char *start1 = (unsigned char *)start;
	unsigned char mask = 1 << 7;
	
	char tmp;
	for(int i = 0; i < len; i++){
		tmp = *(start1 + i);
		for(int j = 0; j < 8; j++){
			if((mask & tmp) == 0){
				putchar('0');
			}else{
				putchar('1');
			}
			tmp <<= 1;
		}
		putchar(' ');
	}
	putchar('\n');
}







