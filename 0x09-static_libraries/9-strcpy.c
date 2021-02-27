#include "holberton.h"

/**
 * _strcpy- copies the string pointed to by src
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
