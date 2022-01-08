#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);

char *_strcopy(char *dest, char *src);

/**
 * _strlen - gets the lenght of a string.
 *
 * @str: a pointer to the string.
 *
 * Return: the lenght of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * _strcopy - copies the contents of src into dest.
 *
 * @dest: a pointer to the buffer where src will be copied.
 * @src: a pointer to the string to be copied.
 *
 * Return: a pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len])
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: a pointer to the dog's name.
 * @age: the dog's age.
 * @owner: a pointer to the owner's name.
 * Return: a pointer to the new dog;
 *			NULL if the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free (doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return(NULL);
	}

	doggie->age = age;
	doggie->name = _strcopy(doggie->name, name);
	doggie->owner = _strcopy(doggie->owner, owner);

	return (doggie);
}
