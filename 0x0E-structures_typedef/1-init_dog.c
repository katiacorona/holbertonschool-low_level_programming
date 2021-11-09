#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: a pointer to the struct dog
 * @name: a pointer to the name of the dog
 * @age: age of the dog
 * @owner: a pointer to the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog_t;

	struct dog *d;
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
