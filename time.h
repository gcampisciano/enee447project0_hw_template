
/*
  \return timer reading in microsecond
*/
extern unsigned long now_usec ( void );

/*
  \param usecs time to wait in microsecond
*/
extern void wait( unsigned int usecs );

/*
  \param operand_1 time in microsecond
  \param operand_2 another time in microsecond
  \return time difference between operand_1 and operand_2 in microsecond
*/
unsigned long usec_diff ( unsigned long operand_1, unsigned long operand_2);

/*
  Initialize the timer you want to use for this project
*/
extern void init_timer();

#define ONE_USEC	0x1
#define ONE_MSEC	(ONE_USEC << 10)
#define ONE_SECOND	(ONE_MSEC << 10)

