#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory and returns a pointer to it.
 *
 * @b: bytes to allocate.
 *
 * Return:	a pointer to the allocated memory;
 *		on failure, exit with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
