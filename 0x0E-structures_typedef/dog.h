#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a new type struct dog.
 *
 * @name: a pointer to the name of the dog.
 * @age: the age of the dog.
 * @owner: a pointer to the name of the owner.
 *
 * Description: defines a new type struct dog and declares name, age and owner
 * elements of the structure.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
