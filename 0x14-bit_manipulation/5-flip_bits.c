#include "main.h"

/**
 * flip_bits- function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: The number.
 *  @m: The number to flip n to.
 *  Return: The necessary number of bits to flip to get from n to m.
 */
int main() {
	int result = bit_flip_count(10,5);
	printf("%d" ,result);
	return 0;
}

