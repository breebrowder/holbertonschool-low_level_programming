#include "holberton.h"

/**
 * factorial- returns the factorial of a given number
 * @n: given number
 *
 * Return: If n is lower than 0, return -1 to indicate an error
 */

int factorial(int n)
{
	if (n < 0) /* conditional statement */
	{
		return (-1);
	}
	else if (n == 0) /* conditional statement */
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1)); /* the meat of the task */
	}
}
