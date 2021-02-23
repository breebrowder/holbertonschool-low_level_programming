#include "holberton.h"

/**
 * _memcpy- copies memory area
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: bytes from memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;

	for (; x < (int)n; x++) /* comparison between signed and unsgined int */
	{
		dest[x] = src[x];
	}
	return (dest);
}
