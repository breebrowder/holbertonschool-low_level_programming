#include "holberton.h"

/**
 * _puts_recursion- function that prints a string, followed by a new line
 * @s: pointer
 *
 * Return: N/A
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n'); /* print a new line */
	}
	if (*s != '\0') /* if not equal to */
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
