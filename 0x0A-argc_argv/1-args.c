#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main- printing number of arguments passed to it, followed by new line
 * @argc: argument count
 * @argv: argument vector (passed as an array of strings)
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);

	return (0);
}
