#include "holberton.h"

/**
 * str_concat- concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new space in memory
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int x = 0;
	int y = 0;
	int i = 0;

	if (s1 == '\0')
		s1 = ""; /* condition with empty string */

	for (; s1[x] != '\0'; x++) /* move through both strings */
		continue;

	if (s2 == '\0')
		s2 = ""; /* condition with empty string */

	for (; s2[y] != '\0'; y++) /* move through both strings */
		continue;

	array = malloc((x * sizeof(*s1)) + (y * sizeof(*s2)) + 1);
	if (array == '\0')
		return ('\0'); /* condition failure case */

	while (i < (x + y + 1))
	{
			array[i] = s1[i];
			i++;
	}
	return (array);
}
