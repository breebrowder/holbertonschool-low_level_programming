#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers- print 0-9 followed by a new line using only _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{

		_putchar(i);
		i++;
	}

	_putchar('\n');

}
