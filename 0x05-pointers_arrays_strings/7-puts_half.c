#include "holberton.h"

/**
 * puts_half- print half of a string, followed by a new line
 * @str: pointer to string
 *
 */

void puts_half(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)

	{
		_putchar(str[i]);
	}
	_putchar('\n');
} /* will need to add a second for loop */
