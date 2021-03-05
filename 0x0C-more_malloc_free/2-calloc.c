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
	unsigned int i;

	if (nmemb == 0)
		return (NULL); /* condition */

	if (size == 0)
		return (NULL); /* condition */

	allocatedmemory = malloc(nmemb * size); /* allocmem being initialized */
	if (allocatedmemory == NULL)
		return (NULL); /* failure case */

	i = 0; /* iterator being initialized */
	if (i < nmemb * size) /* will stop at nullbyte */
	{
		allocatedmemory[i] = '\0';
		i++;
	}
	return (allocatedmemory); /* condition */
}
