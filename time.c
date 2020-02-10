#include "time.h"
#include "utils.h"
#include "math.h"

unsigned long now_usec ( void )
{
	long ms;
	time_t t;
	struct timespec sp;
	
	clock_gettime(CLOCK_REALTIME, &sp);
	t  = spec.tv_sec;
    	ms = round(spec.tv_nsec / 1.0e6);
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
	
}

