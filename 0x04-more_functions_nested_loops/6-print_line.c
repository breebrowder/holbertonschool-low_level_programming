#include "holberton.h"

/**
 * print_line- drawing a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;

	while(i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
