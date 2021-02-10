#include "holberton.h"

/**
 * _isalpha- checking for an alphabetic character
 * @c: character
 * Return: 1 is yes, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	else
		return (0);
}
