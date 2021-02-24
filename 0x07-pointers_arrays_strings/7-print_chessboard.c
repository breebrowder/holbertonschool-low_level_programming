#include "holberton.h"

/**
 * print_chessboard - prints a chessboard
 * @a: pointer
 * Return: N/A
 */

void print_chessboard(char (*a)[8])
{
	int x = 0;
	int y = 0;

	while (x != 7 || y != 7)
	{
		_putchar(a[x][y]);
		if (y == 7)
		{
			_putchar('\n');
			x++;
		}
		else
			y++;
		}

}
