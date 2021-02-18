#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit- printing the last digit of any number
 * @n: int number
 * Return: always zero
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
		_putchar(last + '0');
		return (last);
	}
	else
	{
		last = n % 10;
		_putchar(last + '0');
		return (last);
	}

}
