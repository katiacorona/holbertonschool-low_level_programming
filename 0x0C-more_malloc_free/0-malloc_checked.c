#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns a pointer to it.
 *
 * @b: the size of the memory allocated.
 *
 * Return: on failure, exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr)* b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
