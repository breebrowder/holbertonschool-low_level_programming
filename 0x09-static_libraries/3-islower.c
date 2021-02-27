#include "holberton.h"

/**
 * _islower- checking for lowercase letters
 * @c: iterator character
 *
 * Return: always zero
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
