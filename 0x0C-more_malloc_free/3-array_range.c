#include "holberton.h"

/**
 * array_range- create an array of integers
 * @min: minimum value of array of integers
 * @max: maximum value of array of integers
 *
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *newarray;
	int i;

	if (min > max)
		return (NULL);

	newarray = malloc(sizeof(int) * (max - min + 1));
	if (newarray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		newarray[i] = min;
		min++;
	}
	return (newarray);
}
