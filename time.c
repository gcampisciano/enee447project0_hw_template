#include "time.h"
#include "utils.h"

unsigned long now_usec ( void )
{
	struct timeval curtime;
	gettimeofday(&curtime, NULL);
	return curtime.tv_sec * (int)1e6 + curtime.tv_usec;	
}

unsigned long usec_diff ( unsigned long operand_1, unsigned long operand_2)
{
	time_t diff;
	diff = difftime(operand_1, operand_2);
	return diff;
}

void wait( unsigned int usecs )
{
	unsigned long start;
	unsigned long diff;
	start = now_usec();
	diff = usec_diff(start, now_usec());
	while(diff < usecs) {
		diff = usec_diff(start, now_usec());
	}
}

void init_timer()
{
	// Needs implementation
}

