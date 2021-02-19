#include "holberton.h"
#include <stdio.h>

/**
 * cap_string- function that capitalizes all words of a string
 * @str: pointer to string
 * Description: not yet complete, betty compliant with a return
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	int x = 10;


	for (i = 0; str[i] != '\0'; i++)
	{
		str[i] = x;
	}
	return (str);
}
