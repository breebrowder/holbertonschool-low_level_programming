#include "holberton.h"
/**
 * _memset- fills the bytes of the memory area with the constant byte
 * @s: pointer to memory area
 * @b: constant byte
 * @n: bytes of the memory area
 * Return: a pointer to the memory area (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x;


	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
