#include "variadic_functions.h"

/**
 * sum_them_all- function returns the sum of all its parameters
 * @n: number of parameters being passed in the function
 *
 * Return: sum of all parameters in the function
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0; /* index */
	unsigned int total = 0; /* sum of all parameters */

	if (n == 0)
		return (0); /* condition */

	va_start(arguments, n);
	for (; i < n; i++)
		total += va_arg(arguments, int);

	va_end(arguments);

	return (total);
}
