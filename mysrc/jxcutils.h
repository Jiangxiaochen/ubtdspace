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

void show_bytes(void *start, unsigned len);

void show_number(void *start, unsigned len);
void show_line();

#define big_endian		0
#define small_endian	1
int show_endian();

void show_bits(void *start, unsigned len);
#endif
