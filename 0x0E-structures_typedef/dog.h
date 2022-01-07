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

/**
 * dog_t - new typedef for struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /* DOG_H */
