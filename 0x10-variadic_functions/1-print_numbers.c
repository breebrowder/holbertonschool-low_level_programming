#include "variadic_functions.h"
#include <stdio.h> /* task allows for standard library */

/**
 * print_numbers- function that prints numbers, followed by a new line
 * @separator: pointer to the string to be printed between numbers
 * @n: number of ints passed into the function
 *
 * Return: numbers passed through the fucntion
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list integers;
	unsigned int i = 0; /* index */

	if (separator == '\0')
		return; /* condition: failure case */

	va_start(integers, n);
	for (; i < n; i++)
	{
		printf("%d", va_arg(integers, int));

		if (separator != '\0' && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(integers);
}
