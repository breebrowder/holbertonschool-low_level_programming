#include "holberton.h"

/**
 * reverse_array- reverses the content of an array of integers
 * @a: pointer to array of integers
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int x;
	int temp;

	for (x = 0; x <= n; n--, x++)
	{
		temp = a[x];
		a[x] = *(a + n - 1);
		*(a + n - 1) = temp;
	}
}
