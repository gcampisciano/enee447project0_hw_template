#include "time.h"
#include "utils.h"

#define CORE_PRESCALAR 0x40000008
#define MS_BITS 0x40000020
#define LS_BITS 0x4000001C


unsigned long now_usec ( void )
{
	unsigned int v, v2;
	
	v = GET32(LS_BITS); // get LS bits
	v2 = GET32(MS_BITS); // get MS bits
	return (v << 31) + v2; // shift LS bits by 32 and add MS bits
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
	// start timer, divider = 1, increment = 1, 
	PUT32(CORE_PRESCALAR, 0x80000000); // divider = 1;
}

