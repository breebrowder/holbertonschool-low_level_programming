#include "holberton.h"

/**
 * _strcat- concatentating two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: dest string
 */

char *_strcat(char *dest, char *src)
{
	int x = 0; /* already initialized and given a value here */
	int y;
	/* char *dest and *src have already been declared in the declaration */

	for (; dest[x] != '\0'; x++) /* "!=" overwrites termin. null byte */
		continue;

		for (y = 0; src[y] != '\0'; y++)
		{
			dest[x] = src[y];
			x++;
		}
	dest[x] = '\0'; /* adding terminating null byte to dest */
	return (dest);
}
