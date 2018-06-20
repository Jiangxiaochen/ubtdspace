#ifndef _JXC_UTILS_H_
#define _JXC_UTILS_H_

#include <setjmp.h>
#include <ctype.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <errno.h>
#include <limits.h>
#include <execinfo.h>
#include <sys/time.h>
#include <stdint.h>

uint64_t getMicrotime();
uint64_t getNanoTime();

void show_bytes(void *start, unsigned len);

void show_number(void *start, unsigned len);
void show_line();

#define big_endian		0
#define small_endian	1
int show_endian();

void show_bits(void *start, unsigned len);

inline void mytrace()
{
	void *buffer[20];
	int num = backtrace(buffer,20);
	char **name = backtrace_symbols(buffer,num);
	for(int i = 0; i < num; i++) printf("%s\n",name[i]);
	free(name);
}

#endif
