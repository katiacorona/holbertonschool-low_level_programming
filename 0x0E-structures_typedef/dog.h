#ifndef DOG_H
#define DOG_H

/**
 * struct dog - holds the details of the new doggie
 * @name: a pointer to the doggie's name
 * @age: doggie's age
 * @owner: name of the doggie's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

int _putchar(char);

#endif /* DOG_H */
