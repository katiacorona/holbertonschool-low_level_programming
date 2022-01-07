#include "dog.h"

/**
 * init_dog - initializes a variable of type dog.
 *
 * @d: a pointer to a struct dog.
 * @name: a pointer to the dog's name.
 * @age: the dog's age.
 * @owner: a pointer to the owner's name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
