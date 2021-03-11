#include "function_pointers.h"

/**
 * op_add- returns sum of two ints
 * @a: type int
 * @b: type int
 *
 * Return: int result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub- returns the difference of two ints
 * @a: type int
 * @b: type int
 *
 * Return: int result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul- returns the product of two ints
 * @a: type int
 * @b: type int
 *
 * Return: int result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div- returns result of division of two ints
 * @a: type int
 * @b: type int
 *
 * Return: int result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- returns the remainder of division of two ints
 * @a: type int
 * @b: type int
 *
 * Return: int result
 */

int op_mod(int a, int b)
{
	return (a % b);
}
