#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- add positive numbers
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 * Description: using atoi to convert a char to an int
 * Return: 0 if good, 1 if error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int y;
	int total;

	total = 0;
	while (i < argc)
	{
		for (y = 0; argv[i][y]; y++)
		{

			if (!argv[i][y] >= '0' && argv[i][y] <= '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
		/* += adds value on the right to a variable & assigns result */
		i++;
	}
	printf("%d\n", total); /* if no # is passed print 0, new line */
	return (0);
}
