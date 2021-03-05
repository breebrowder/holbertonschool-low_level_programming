#include "holberton.h"

/**
 * malloc_checked- allocates memory using malloc
 * @b: sizeof
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *allocatedmemory;

	allocatedmemory = malloc(b); /* b is sizeof operator */

	if (allocatedmemory == '\0') /* condition if it fails */
		exit(98); /* process termination with status value */

	return (allocatedmemory); /* condition */
}
