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
	void *allocatedmemory;
	char *replace;
	unsigned int i;

	if (nmemb == 0)
		return (NULL); /* condition */

	if (size == 0)
		return (NULL); /* condition */

	allocatedmemory = malloc(nmemb * size); /* being initialized */
	if (allocatedmemory == NULL)
		return (NULL); /* failure case */

	replace = allocatedmemory;

	for (i = 0; i < nmemb; i++)
		replace[i] = 0; /* memory set to zero; read man page */


	return (allocatedmemory); /* condition */
}
