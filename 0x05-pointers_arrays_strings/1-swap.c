#include"mai.h"

/**
 * Swap_int - swaps the values of two integers
 * @a: interger to swap
 * @b: integer too swap
 * return
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
