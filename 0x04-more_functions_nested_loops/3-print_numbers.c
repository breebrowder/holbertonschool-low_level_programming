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

	for (i = 0; i <= 9; i++)
	{
		_putchar (i);
		_putchar ('\n');
	}
}
