/**
 * struct Dog - holds the details of the new doggie
 * @name: a pointer to the doggie's name
 * @age: doggie's age
 * @owner: name of the doggie's owner
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - typedef for Dog struct
 */

typedef struct Dog dog;

int _putchar(char);
