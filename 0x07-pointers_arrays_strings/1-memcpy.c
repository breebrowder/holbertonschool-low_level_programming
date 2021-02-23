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


	while (n > 0 )
	{
		dest = src;
		n--;
	}
	return (dest);
}
