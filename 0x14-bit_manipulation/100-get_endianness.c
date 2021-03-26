#include "holberton.h"

/**
 * get_endianness- function that checks the endianness
 *
 * Return: 0 if big, 1 if little
 */

int get_endianness(void)
{
	int j;
	char *k;

	j = 1;
	k = (char *)&j;

	return (*k);
}
