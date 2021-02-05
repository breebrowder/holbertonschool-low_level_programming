#include <stdio.h>

/**
 * main- print lowercase alphabet in reverse
 *
 * Return: always zero
 */

int main(void)
{
	char rev;

	rev = 'z';

	while (rev >= 'a')
	{

		putchar(rev);
		rev--;
	}

	putchar('\n');
	return (0);

}
