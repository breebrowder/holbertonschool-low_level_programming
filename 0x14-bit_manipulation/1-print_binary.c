#include "holberton.h"

/**
 * print_binary- function that prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bitnum;
	unsigned int binaryrep;

	bitnum = n;
	binaryrep = 1;

	if (bitnum > binaryrep)
		print_binary(bitnum >> binaryrep); /*n bits get right shifted */
	/* leading positions are filled with zeros */

	_putchar((bitnum & binaryrep) + '0');
	/*AND op result is 1 when both are*/
}
