#include "holberton.h"

/**
 * _strdup- returns a pointer to a new space in memory, contains a copy of str
 * @str: string
 *
 * Return: pointer to duplicated string
 */

char *_strdup(char *str)
{
	char *dup;
	int x = 0; /* iterator for str */
	int y = 0;

	if (str == '\0')
		return ('\0'); /* condition */

	for (; str[x] != '\0'; x++)
		continue;

	dup = malloc(x * sizeof(*dup) + 1);
	while (y < x)
	{
		dup[y] = str[y];
		y++;
	}
	if (dup == '\0')
		return ('\0'); /* condition */

	return (dup); /* condition */
}
