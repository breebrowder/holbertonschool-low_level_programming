#include "holberton.h"

/**
 * _calloc- allocate memory for an array, using malloc
 * @nmemb: elements in array
 * @size: number of bytes
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *allocatedmemory;
	unsigned int iterator;

	if (nmemb == 0)
		return (NULL); /* condition */

	if (size == 0)
		return (NULL); /* condition */

	allocatedmemory = malloc(nmemb * size);
	if (allocatedmemory == NULL)
		return (NULL); /* failure case */

	while (iterator < nmemb)
	{
		iterator++;
	}
	return (allocatedmemory); /* condition */
}
