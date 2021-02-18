#include "holberton.h"

/**
 * _strncpy- function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
/* dest, src, and n have already been delcared */

	for (; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	for (x = 0; n > x; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
