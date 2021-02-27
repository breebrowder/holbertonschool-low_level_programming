#include "holberton.h"

/**
 * _strpbrk- searches the string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: pointer to byte in s that matches any bytes in accept, NULL if not
 */

char *_strpbrk(char *s, char *accept)
{
	int x = 0; /* run through entire length of string */
	int y = 0; /* run through entire length of string */
	char *p;

	for (; s[x] != '\0'; x++)
	{
		for (; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				p = &s[x];
			return (p);
		}
		if (s[x] != '\0')
			return ('\0');
	}
	return (0);
}
