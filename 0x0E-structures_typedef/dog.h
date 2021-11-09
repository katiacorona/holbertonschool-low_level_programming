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
 * dog - typedef for dog struct
 */

typedef struct dog dog_type;

int _putchar(char);
