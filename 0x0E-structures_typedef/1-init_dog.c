#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the struct dog.
 *
 * @d: a pointer to a type struct dog.
 * @name: a pointer to the name of the dog.
 * @age: the age of the dog.
 * @owner: a pointer to the name of the owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
