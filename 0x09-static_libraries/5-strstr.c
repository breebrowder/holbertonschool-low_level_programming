#include "holberton.h"

/**
 * _strstr- locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: pointer to the beginning of the located substring, or NULL if not
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0; /* move through haystack */
	int y = 0; /* move through needle */

	while (haystack[x] != '\0')
	{
		while (needle[y] != '\0' && haystack[x] != '\0')
		{
			if (haystack[x] == needle[y])
			x++;
			y++;
		}
		if (needle[y] == '\0')
			return (haystack);
	}
	return ('\0');
}
