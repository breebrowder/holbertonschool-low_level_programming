#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings- function that prints strings, followed by a new line
 * @separator: pointer to string to be printed between strings
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0; /* index */
	char *oneof; /* check requirements */

/*
 *      if (separator == '\0')
 *      return ('\0'); condition: failure case
 */

	va_start(strings, n);
	for (; i < n; i++)
	{
		oneof = va_arg(strings, char *);
		if (oneof == '\0')
			printf("(nil)"); /* condition */

		else
			printf("%s", oneof);

		if (separator != '\0' && i != (n - 1))
			printf("%s", separator);
	}
	puts(""); /* condition: new line */

	va_end(strings);
}
