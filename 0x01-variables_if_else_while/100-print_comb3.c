#include <stdio.h>

/**
 * main- main function prints all possible combos of two digits
 *
 * Return: 0
 */

int main(void)
{
	int count = 0; /* iterator keeps count */
	int right;
	int left;

	for (; count < 100; count++)
	{
		right = count % 10; /* gets last digit */
		left = count / 10; /* shortens i */

		if (right < left)
		{
			putchar(right + '0'); /* this is an ASCII value */
			putchar (left + '0');

			if (count < 89)
			{
				putchar(44); /* ASCII comma */
				putchar(32); /* ASCII space */
				putchar('\n');
			}
		}
	}
	return (0);
}
