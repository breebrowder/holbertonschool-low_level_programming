#include <stdio.h>

/**
 * main- printing alphabet in lowercase
 *
 * Return: always zero
 */

int main(void)
{
	char c; /* c is for character */

	for (c = 'a' ; c <= 'z' ; c++)
		putchar (c);
	putchar ('\n');

	return (0);
}
