#include<stdio.h>


/**
 * main -entry point
 *
 *
 *
 * description: print numbers of base16 in lower case
 *
 * return: a;ways 0 (SUCCESS)
 */
int main(void)
{
	int digit = 48;/*48;decimal repo of 0*/

	while (digit  <= 102)/*102;decimal repo of f*/
	{
		putchar(digit);/*after 9 we jump till 96;'*/if (digit == 57) digit +=39;
		++digit;
	}
	putchar('\n');

	return (0);
}
