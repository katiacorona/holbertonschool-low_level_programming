#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes.
 *
 * @nmemb: the number of elements in the array.
 * @size: the size of each element.
 *
 * Return:	if nmemb or size = 0, or if malloc fails, return NULL;
 *		otherwise, return a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		alloc[i] = 0;
	}
	return (alloc);
}
