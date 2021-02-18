#include <stdio.h>

/**
 * main- printing all numbers of base 16 in lowercase with new line
 *
 * Return: 0
 */

int main(void)
{
	char x;
	int y;

	for (y = 0; y <= 9; y++)
	{
		putchar(y + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
