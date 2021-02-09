#include "holberton.h"

/**
 * print_alphabet_x10- printing alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i; /* iterator */
	int ch;

	for (i = 0; i <= 9; i++)
	{
		ch = '97';
		while (ch <= '122')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
