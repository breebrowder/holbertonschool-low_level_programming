#include "holberton.h"

/**
 * _strcmp- comparing two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int b = 0;

	for (; s1[b] != '\0' || s2[b] != '\0'; b++)
/* (||)- logical operator used to compare two true statements */

		if (s1[b] != s2[b]) /* if the strings are not equal */
	{
		return (s1[b] - s2[b]); /* then... print... */
	}
	return (0);
}
