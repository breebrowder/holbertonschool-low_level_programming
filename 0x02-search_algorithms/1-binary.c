#include "search_algos.h"

/**
 * binary_search- function that searches for a value in a sorted array of ints
 * USE BINARY SEARCH ALGORITHM
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where the value is located
 */

int binary_search(int *array, size_t size, int value)
{

	size_t idx, lowest, highest;

	if (array == NULL)
		return (-1); /* condition */

	for (lowest = 0, highest = size - 1; highest >= lowest;)
	{
		idx = lowest;

		printf("Searching in array: ");
		for (; idx < highest; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = lowest + (highest - lowest) / 2;

		if (array[idx] == value)
			return (idx);

		if (array[idx] > value)
			highest = idx - 1;
		else
			lowest = idx + 1;
	}

	return (-1); /* failure */
}
