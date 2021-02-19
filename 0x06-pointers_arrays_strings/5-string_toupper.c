#include "holberton.h"

/**
 * string_toupper- change all lowercase letters of string to uppercase
 * @upper: pointer to string of lowercase letters
 *
 * Return: upper
 */

char *string_toupper(char *upper)
{
	int l = 0;

	for (; upper[l] != '\0'; l++)
	{
		if (upper[l] > 96 && upper[l] < 123) /* > than a, less than z */
		{
			upper[l] = upper[l] - 32;
/* if character is lowercase subtract 32 */
		}
	}
	return (upper);
}
/* there are 32 positions reserved for control characters */
