#include "holberton.h"

/**
 * swap_int- swapping the values of two integers
 * @a: int type
 * @b: int type
 *
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
