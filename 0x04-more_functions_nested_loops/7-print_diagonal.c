#include "holberton.h"

/**
 * print_diagonal- drawing a diagonal line in the terminal
 * @n: int type
 * Return: void
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 0; b <= a - 1; b++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
