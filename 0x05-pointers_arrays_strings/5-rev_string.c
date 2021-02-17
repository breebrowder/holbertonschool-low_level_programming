#include "holberton.h"

/**
 * rev_string- printing string in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int b = 0;
	int tmp;

	while (s[i] != '\0')
		i++;

	i--;

	for (; b <= i; b++, i--)
	{
		tmp = s[i];
		s[i] = s[b];
		s[b] = tmp;
	}
}
