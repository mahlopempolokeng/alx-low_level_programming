#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @n: input value
 *
 * Return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
