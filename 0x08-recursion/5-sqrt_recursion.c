#include "holberton.h"

/**
 * _sqrt_recursion-  returns the natural square root of a number
 * @n: number
 *
 * Return: If n does not have a natural square root, return -1
 */

int _sqrt_recursion(int n)
{
	return (new_function(n, 0));
}

/**
 * new_function- "main" function
 * @n: ntype int
 * @a: type int
 *
 */

int new_function(int n, int a)
{
	int i = a * a;

	if (i == n)
	{
		return (a);
	}

	if (i > n)
	{
		return (-1);
	}
	return (n + a + 1);
}
