#include "holberton.h"
#include <stdio.h>

/**
 * print_array- print n elements of an array of integers, with new line
 * @a: pointer to array of integers
 * @n: number of elements to be printed
 *
 */

void print_array(int *a, int n)
{
	int x;

	x = 0;
	for (n--; n > -1; n--, x++)
	{
		printf("%i", a[x]);
		if (n >= 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
