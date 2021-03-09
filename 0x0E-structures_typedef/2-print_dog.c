#include "dog.h"
#include <stdio.h>

/**
 * print_dog- print a struct dog
 * @d: pointer to struct
 *
 */

void print_dog(struct dog *d)
{
	if (d == '\0')
		return; /* condition: print nothing */

	if (d->name == '\0') /* condition: element of d NULL */
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

	if (d->owner == '\0') /* condition: element of d NULL */
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
