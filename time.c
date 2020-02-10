#include "time.h"
#include "utils.h"

#define CORE_PRESCALAR 0x4000_0008
#define MS_BITS 0x4000_0020
#define LS_BITS 0x4000_001C


unsigned long now_usec ( void )
{
	// read value from timer
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
	// start timer
}

