#include "holberton.h"

/**
 * more_numbers- printing 0-14 ten times using _putchar
 *
 * Return: void
 */

void more_numbers(void)
{
	int i; /* iterator */
	int n;

	i = 0;

	while (i <= 9)
	{
		i++;

		for (n = 0; n <= 14; n++)
		{
		if (n >= 10) /* there is no char value on ascii past 9 */
			_putchar('0' + n / 10); /* all num to the left of 10 */
		_putchar(n % 10 + '0'); /* all num to the right of 10 */
		}
	_putchar('\n');
	}
}
