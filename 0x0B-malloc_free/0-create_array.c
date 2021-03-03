#include "holberton.h"

/**
 * create_array- create an array of chars, initializes it with a specific char
 * @size: size of array
 * @c: specific char
 *
 * Return: NULL if size = 0, or NULL if it fails, a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int y = 0; /* iterator */

	if (size == 0)
		return (NULL); /* condition */

	array = malloc(size * sizeof(*array));
	for (; y < size; y++)
	{
		array[y] = c; /* initializing with char c */
	}

	if (array == NULL)
		return (NULL); /* condition if case fails */

	return (array); /* conditon returns pointer to array */
}
