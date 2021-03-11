#include "function_pointers.h"

/**
 * int_index- function searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: index of the first element for which the cmp func does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int bree = 0;

	if (size < 1) /* same as <= 0 */
		return (-1); /* condition */

	if (array != '\0' && cmp != '\0') /* edgecases */

		for (; bree < size; bree++)
		{
			if (cmp(array[bree]))
				return (bree);
		}
	return (-1);
}
