#include <stdio.h>

/**
 * main- print numbers 0-9 using only putchar
 *
 * Return: always zero
 */

int main(void)
{
	int i; /* incrementer */

	i = '0';

	while (i <= '9')
	{

		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);

}
