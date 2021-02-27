#include "holberton.h"

/**
 * _strspn- get the length of a prefix substring
 * @s: pointer to string
 * @accept: pointer
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int y = 0;
	char *bree = accept;
	unsigned int n = 0;

	for (; s[x] != ',' && s[x] != '\0'; x++)

		for (; bree[y] != '\0'; y++)
		{
			if (bree[y] == s[x])
				n++;
		}
	return (n);
}
