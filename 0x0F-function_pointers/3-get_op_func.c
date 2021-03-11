#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func- returns a pointer to func that corresponds to given parameter
 * @s: operator passed as argument
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub};
		{"*", op_mul};
		{"/", op_div};
		{"%", op_mod};
		{NULL, NULL}
	};

	int i;

	for (i = 0; i < 5; i++)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
	}
	return (NULL);
}
