#include "holberton.h"
#include <stddef.h> /* attempted using "NULL" with this header */

/**
 * _strlen_recursion- returns the length of a string
 * @s: pointer
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int length; /* literal variable name helps conceptualize */


	if (*s == '\0') /* if you move through string from index 0, return 0 */
		return (0);
	{
		length = 1 + _strlen_recursion(++s); /* (++s) same as (s + 1) */
	}
	return (length);
}
