#include "holberton.h"

/**
 * is_prime_number- returns 1 if the integer is a prime number, else return 0
 * @n: number
 *
 * Return: 1 for prime, else 0
 */

int is_prime_number(int n)
{
	return (another_function(n, 2));
}

/**
 * another_function- "main" function
 * @n: int type
 * @a: int type
 * Return: new func
 */

int another_function(int n, int a)
{
	if (n % a == 0)
	{
		return (0);
	}
	if (a >= n)
	{
		return (1);
	}
	else
		return (another_function(n, a + 1));
}
