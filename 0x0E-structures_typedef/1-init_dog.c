#include "dog.h"

/**
 * init_dog- initialize all variables of struct
 * @d: pointer to struct
 * @name: character string
 * @age: type int
 * @owner: charcter string
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		(*d).age =  age;
		(*d).owner = owner;
	}
}
