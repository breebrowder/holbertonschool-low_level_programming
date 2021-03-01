#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- adds positive numbers
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 * Description: using atoi to convert a char to an int
 * Return: 0 if good, 1 if error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int total;

	total = 0;
	while (i < argc)
	{
		if (!argv[i]) /* array will not have a null-byte */
		{
			printf("Error\n");
			return (1);
		}
		total += atoi(argv[i]);
		/* += adds value on the right to a variable & assigns result */
		i++;
	}
	printf("%d\n", total); /* if no # is passed print 0, new line */
	return (0);
}
