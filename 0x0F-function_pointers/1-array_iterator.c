#include "function_pointers.h"

/**
 * array_iterator- executes a function given as parameter in an array
 * @array:arrays of ints
 * @size: size of the array
 * @action: function pointer
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t bree = 0; /* iterator for array */

	if (array != '\0' && action != '\0')

	for (; bree < size; bree++)
	{
		action(array[bree]);
	}
}
