#include "holberton.h"

/**
 * _strchr- locates a character in a string
 *
 * @s: pointer to string
 * @c: character
 *
 * Return: pointer to first occurrence of c in the string, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int x;

	for (; s[x] != '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
