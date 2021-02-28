#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 * Description: using atoi to convert a char to an int
 * Return: 0 if good, 1 if error
 */

int main(int argc, char *argv[])
{
	int index1 = atoi(argv[1]);
	int index2 = atoi(argv[2]);

	(void)argc;


	if (index1 && index2) /* 1 & 2 for both indexes */
	{
		printf("%d\n", index1 * index2);
	}
	else
		printf("Error\n");

	return (1);
}
