#include "holberton.h"

/**
 * _strlen- returning the length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * create_file- function that creates a file
 * @filename: pointer to file
 * @text_content: contents contained in file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int mainfile, writepermfile, realstrlen;

	if (filename == NULL)
		return (-1); /* condition: failure */

	if (text_content != NULL)
		realstrlen = _strlen(text_content);

	mainfile = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	if (mainfile == -1)
		return (-1); /* condition: failure */

	writepermfile = write(mainfile, text_content, realstrlen);
	if (writepermfile == -1)
		return (-1); /* condition: failure */

	close(mainfile);
	return (1); /* success */
}
