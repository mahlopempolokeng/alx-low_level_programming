#include "main.h"
#include <unstd.h>
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: On Success 1,
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(charc)
{
	return(write(1, &c, 1));
}
