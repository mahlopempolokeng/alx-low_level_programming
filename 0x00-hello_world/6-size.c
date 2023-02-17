#include <stdio.h>
/**
 * main-Entry pointt
 *
 * Return.Always 0(Success)
 */
int mai(void)
{
	printf(" size of a char: %d byte(s)\n ",sizeof(char));
	printf(" size of an int: %d byte(s)\n ",sizeof(int));
	printf(" size of a long int: %d bytes(s)\n ",sizeof(long long int));
	printf(" size of a float: %d bytes(s)\ n",sizeof(float));
	return(0);
}

