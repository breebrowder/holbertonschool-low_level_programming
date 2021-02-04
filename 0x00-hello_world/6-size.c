#include <stdio.h>

/**
 * main - printing the size of various types on the computer
 * Return: always zero
 */

int main(void)
{
	char chardata;
	int intdata;
	int longint;
	int doublelong;
	float floatdata;

	/* 5 different data types to be printed */
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
