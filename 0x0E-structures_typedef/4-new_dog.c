#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);

char *_strcopy(char *dest, char *src);

/**
 * _strlen - gets the lenght of a given string.
 *
 * @s: a pointer to the string.
 *
 * Return: the lenght of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * _strcopy - copies a string pointed to by src into dest.
 *
 * @dest: pointer to buffer where string will be copied.
 * @src: points to the string to be copied.
 *
 * Return: a pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = src[i];
	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: a pointer to the dog's name.
 * @age: the dog's age.
 * @owner: a pointer to the owner's name.
 *
 * Return: 0 on success; NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}

	doggie->age = age;

	doggie->name = _strcopy(doggie->name, name);
	doggie->owner = _strcopy(doggie->owner, owner);

	return (doggie);
}
