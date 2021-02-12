#include "holberton.h"

/**
 * print_most_numbers- print 0-9, but skip 2 and 4, use a new line
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{

		if (i != '2' && i != '4')
			_putchar (i);
		i++;
	}
	_putchar ('\n');

}
