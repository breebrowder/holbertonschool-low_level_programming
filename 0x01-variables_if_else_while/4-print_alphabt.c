#include <stdio.h>

/**
 * main- printing alphabet in lowercase without q and e
 *
 * Return: always zero
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{

		if (c != 'q' && c != 'e')
			putchar (c);
		c++;
	}
	putchar ('\n');

	return (0);
}
