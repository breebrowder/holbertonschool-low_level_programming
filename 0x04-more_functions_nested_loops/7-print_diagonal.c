#include "holberton.h"

/**
 * print_diagonal- drawing a diagonal line in the terminal
 * @n: int type
 * Return: void
 */

void print_diagonal(int n)
{
	int a = 0;
	int b = a;


	while (n > 0)
	{
		while (b > 0)
		{
			_putchar(' ');
			b--;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
		n--;
	}
	if (a < 1)
		_putchar('\n');
}
