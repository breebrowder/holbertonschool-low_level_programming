#include "holberton.h"

/**
 * _strlen_recursion- returns the length of a string
 * @s: pointer
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	for (; s[i]; i++)
	{

		i += _strlen_recursion(s + 1);
	}
	return (i);
}
