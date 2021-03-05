#include "holberton.h"

/**
 * string_nconcat- concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2
 *
 * Return: pointer to new space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newspace; /* output is characters */
	unsigned int x = 0; /* iterator for s1 */
	unsigned int y = 0; /* iterator for s2 */
	unsigned int j; /* edgecase ? */
	unsigned int i; /* edgecase ? */


	if (s1 == '\0')
		s1 = ""; /* condition with empty string */

	for (; s1[x] != '\0'; x++) /* STRLEN- move through both strings */
		continue;

	if (s2 == '\0')
		s2 = ""; /* condition with empty string */

	for (; s2[y] != '\0'; y++) /* STRLEN- move through both strings */
		continue;

	newspace = malloc((x * sizeof(*s1)) + (y * sizeof(*s2)) + 1);
	if (newspace == '\0')
		return ('\0'); /* condition failure case */

	for (j = 0; j < x; j++) /* j is less than the length of s1 */
	{
		newspace[j] = s1[j];
	}

	for (i = 0; i < n; i++) /* i is less than the length of s2 */
	{
		newspace[j] = s2[i];
		j++;
	}
	return (newspace);
}
