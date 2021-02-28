#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- printing all arguments recieved, followed by new line
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i; /* iterator through array of strings in argv */

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]); /* i represents ALL args passed */
	}
	return (0);
}
