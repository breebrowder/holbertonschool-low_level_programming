#include "holberton.h"

/**
 * print_square- printing a square
 * @size: int type
 *
 */
void print_square(int size)
{
	int a = 0;
	int b = 0;

	if (size < 1)
		_putchar('\n');

	while (b < size)
	{
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		b++;
	}
}
