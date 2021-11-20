#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it.
 *
 * @size: the size of the array.
 * @c: the char that will initialize the array.
 *
 * Return: a pointer to the array; NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
