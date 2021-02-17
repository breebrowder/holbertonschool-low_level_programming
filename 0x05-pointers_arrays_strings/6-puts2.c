#include "holberton.h"

/**
 * puts2-  prints every other character of a string, followed by a new line
 * @str: pointer to string
 *
 */

void puts2(char *str)
{
	int i;

	i = 0;

	for (; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
