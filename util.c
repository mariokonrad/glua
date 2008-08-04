#include "util.h"
#include <sys/time.h>
#include <stddef.h>

unsigned long time_usec(void)
{
	struct timeval tv;
	if (gettimeofday(&tv, NULL) < 0) return 0;
	return tv.tv_usec + tv.tv_sec * 1000000;
}

