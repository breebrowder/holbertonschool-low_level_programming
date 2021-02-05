#include <stdio.h>

/**
 * main- printing alphabet in lowercase and upper case
 *
 * Return: always zero
 */

int main(void)
{
	char l; /* l is for lower */
	char u; /* u is for upper */

	for (l = 'a' ; l <= 'z' ; l++)
		putchar (l);

	for (u = 'A' ; u <= 'Z' ; u++)
		putchar (u);
	putchar ('\n');

	return (0);
}
