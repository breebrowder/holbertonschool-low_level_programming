#include "search_algos.h"

/**
 * linear_search- function that searches for a value in an array of integers
 * USE LINEAR SEARCH ALGORITHM
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where the value is located
 */

int linear_search(int *array, size_t size, int value)
{

	size_t idx = 0;


	if (array == NULL) /* if arr is NOT a pointer to first elem of arr... */
		return (-1); /* condition */

/*	if (value == NULL) */
/*		return(-1); condition: remove comp between pointer/int */

	if (idx == size)
		return (-1); /* another edgecase: i must be < num of elems */

	for (; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value) /* value must be present */
			return (idx); /* first index where value is located */
	}

	return (-1); /* return needs to be an int b/c non-void function */
}

/* %lu = unsigned long int AND %d = signed integer */
