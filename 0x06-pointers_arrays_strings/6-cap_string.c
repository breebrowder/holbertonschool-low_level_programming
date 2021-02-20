#include "holberton.h"

/**
 * cap_string- a function that capitalizes all words of a string
 * @s: pointer to string
 * Description: not yet complete, betty compliant with a return
 * Return: s
 */

char *cap_string(char *s)
{
	int i; /* iterator */
	int x; /* represents index of seperators in string */
	int letter = 'a' - 'A';
	char seperator[] = "\t\n;,!\"() {}.?";

		for (i = 0; s[i] != '\0'; i++)
		{
			for (x = 0; seperator[x] < s[i]; x++)
			{
				if (s[i] == seperator[i])
				{
					i++;
					s[i] -= letter;
					s[i] = seperator[i];
				}
			}
		}
		return (s);
}
