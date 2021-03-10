#include "function_pointers.h"

/**
 * print_name- prints name from function pointer
 * @name: character string
 * @f: function pointer; takes a string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != '\0' && f != '\0')
		f(name);
}
