#include <stdio.h>

/**
 * main- print lowercase alphabet in reverse
 *
 * Return: always zero
 */

int main(void)
{
	char rev;

	rev = 96;

	while (rev >= 122)
	{

		putchar(rev);
		rev--;
	}

	putchar("\n");
	return (0);

}
