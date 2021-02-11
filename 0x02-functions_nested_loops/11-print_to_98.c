#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98- printing all natural numbers
 * @n: int number
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98) /* not equal to */
			{
				printf(", ");
			}
			n--; /* decrementer */
		}
	}

		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98) /* not equal to */
			{
				printf(", ");
			}
			n++; /* incrementer */
		}
	printf("\n");
}
