#include "main.n"

/**
 * swap_int - swaps the values of two integers
 * @b: interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
