#include "holberton.h"

/**
 * get_bit- function that returns the value of a bit at given index
 * @n: number or bit
 * @index: index position
 *
 * Return: the value of the bit at index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitnum;

	bitnum = n;

	if (index > 64) /* sizeof unsginedlongint times 8 */
		return (-1); /*error occured */

	return (bitnum >> index & 1);
}
