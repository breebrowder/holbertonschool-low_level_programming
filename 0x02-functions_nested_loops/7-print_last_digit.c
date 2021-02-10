#include "holberton.h"
#include <stdio.h>

/**
 * print_last_digit- printing the last digit of any number
 * @n: int number
 * Return: always zero
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	printf("Last digit: %d", last);

	return (0);

}
