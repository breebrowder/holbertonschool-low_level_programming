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
	char *allocatedmemory;
	unsigned int i = 0;
	unsigned int length = 0;

	if (nmemb == 0)
		return (NULL); /* condition */

	if (size == 0)
		return (NULL); /* condition */

	length = nmemb * size;

	allocatedmemory = malloc(length); /* allocmem being initialized */
	if (allocatedmemory == NULL)
		return (NULL); /* failure case */

	while (i < length)
	{
		allocatedmemory[i] = '\0';
		i++;
	}
	return (allocatedmemory); /* condition */
}
