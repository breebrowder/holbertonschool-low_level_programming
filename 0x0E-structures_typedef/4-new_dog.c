#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog- creates a new dog
 * @name: pointer to name
 * @age: type int age
 * @owner: pointer to owner
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *newstruct;
	int i = 0; /* iterator for newname */
	int x = 0; /* iterator for newowner */
	int y;
	char *newname;
	char *newowner;

	newstruct = malloc(sizeof(newstruct)); /* alloc memory for newstruct */
	if (newstruct == '\0')
		return ('\0'); /* failure case */

	newname = malloc(sizeof(char) * i); /* alloc memory for newname */
	if (newname == '\0')
	{
		free(newname);
		free(newstruct);
		return ('\0'); /* failure case */
	}
	newowner = malloc(sizeof(char) * x); /* alloc memory for newowner */
	if (newowner == '\0')
	{
		free(newowner);
		free(newstruct);
		return ('\0'); /* failure case */
	}

	for (; newname[i] != '\0'; i++) /* strlen: loop to find length */
		continue;

	for (; newowner[x] != '\0'; x++) /* strlen: loop to find length */
		continue;

/* TWO LOOPS FOR STRCPY */
	for (y = 0; y <= i; y++)
		newname[y] = name[y];
	for (y = 0; y <= x; y++)
		newowner[y] = owner[y];

	newstruct->name = newname;
	newstruct->age = age;
	newstruct->owner = newowner;
	return (newstruct);
}
