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
	int j;
	int i;


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

	for (j = 0; j < x; j++) /* j is less than the length of s1 */
	{
		array[j] = s1[j];
	}

	for (i = 0; i < y; i++) /* i is less than the length of s2 */
	{
		array[j] = s2[i];
		j++;
	}
	return (array);
}
