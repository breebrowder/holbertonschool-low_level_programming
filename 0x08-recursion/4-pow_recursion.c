#include "holberton.h"

/**
 * _pow_recursion- returns the value of x raised to the power of y
 * @x: value
 * @y: value
 *
 * Return: If n is lower than 0, return -1 to indicate an error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0) /* conditional statement */
	{
		return (-1); /* indicates an error */
	}
	else if (y == 0) /* conditional statement */
	{
		return (1);
	}
	else
	{
		return (x *  _pow_recursion(x, y - 1));
	}
}
