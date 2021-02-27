#include "holberton.h"

/**
 * _abs- find the absolute value of an integer
 * @a: int type
 * Return: void
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
