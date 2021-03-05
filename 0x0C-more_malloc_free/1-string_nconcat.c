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
	/* n is real length of s2; which is 6 */

	char *newspace; /* output is characters */
	unsigned int j; /* iterator for s1 */
	unsigned int i; /* iterator for s2 */
	unsigned int realstrlen; /* real length of s1 */

	if (s1 == '\0')
		s1 = ""; /* condition with empty string */

	if (s2 == '\0')
		s2 = ""; /* condition with empty string */

	realstrlen = (int)_strlen(s1);
	newspace = malloc((realstrlen + n + 1) * sizeof(char));
	if (newspace == '\0')
		return ('\0'); /* condition failure case */

	for (j = 0, i = 0; j < (realstrlen + n); j++) /* j < length of s1+s2 */
	{
		if (j < realstrlen)
			newspace[j] = s1[j]; /* "Holberton" */
		else
			newspace[j] = s2[i++]; /* "School" stop at index 6 */
	}
	newspace[j] = '\0';
	return (newspace);
}

/**
 * _strlen- find length of string
 * @s: string
 * Description: pulled from 0x05-pointers_arrays_strings
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
