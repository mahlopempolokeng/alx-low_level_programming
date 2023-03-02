#include "main.h"

/**
 * str cat - concatenates the  string pointed to by @src,including the terminal
 * nullbyte, to the string pointed to by @dset.
 * @dset: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dset.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *scrc)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0, src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
