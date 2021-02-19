#include "holberton.h"

/**
 * leet- encoding a string into 1337
 * @str: pointer to string
 *
 * Return: str
 */

char *leet(char *str)
{
	int leet = 0;

	while (str[leet] != '\0')
	{
		if (str[leet] == 'a' || str[leet] == 'A')
			str[leet] = '4';
		while (str[leet] == 'e' || str[leet] == 'E')
			str[leet] = '3';
		while (str[leet] == 'o' || str[leet] == 'O')
			str[leet] = '0';
		while (str[leet] == 't' || str[leet] == 'T')
			str[leet] = '7';
		while (str[leet] == 'l' || str[leet] == 'L')
			str[leet] = '1';
		leet++;
	}
	return (str);
}
