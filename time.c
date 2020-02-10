#include "time.h"
#include "utils.h"
#include <sys/time.h>

unsigned long now_usec ( void )
{
	long us;
	struct timespec sp;
	clock_gettime(CLOCK_REALTIME, &sp);
    	us = sp.tv_nsec / 1000;
	return us;
}

unsigned long usec_diff ( unsigned long operand_1, unsigned long operand_2)
{
	return operand_1 - operand_2;
}

void wait( unsigned int usecs )
{
	unsigned long start;
	unsigned long diff;
	start = now_usec();
	diff = usec_diff(now_usec(), start);
	while(diff < usecs) {
		diff = usec_diff(now_usec(), start);
	}
}

void init_timer()
{
	// None
}

