#include "holberton.h"

/**
 * print_rev- printing a string in reverse, followed by a new line
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;

	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
