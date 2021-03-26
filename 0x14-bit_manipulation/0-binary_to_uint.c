#include "holberton.h"

/**
 * binary_to_uint- function that converts a binary number to an unsigned int
 * @b: pointer to string of binary numbers
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0; /* iterate through length of string */
	unsigned int number = 0;

	if (b == NULL)
		return (0); /* condition */

	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0); /* condition */
		}
		else
		{
			number <<= 1;
			if (b[length] == '1')
				number += 1;
		}
		length++;
	}
	return (number);
}
