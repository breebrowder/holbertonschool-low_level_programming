#include "holberton.h"

/**
 * print_sign- printing sign of a number
 * @n: int number
 *
 * Return:  1 is number is > 0, 0 if zero, and -1 if < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
