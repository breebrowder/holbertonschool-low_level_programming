#include "holberton.h"

/**
 * _print_rev_recursion- prints a string in reverse
 * @s: pointer
 *
 * Return: N/A
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0') /* if not equal to */
	{
		_print_rev_recursion(s + 1); /* locate string at new index */
		_putchar(*s); /* print result */
	}
}
