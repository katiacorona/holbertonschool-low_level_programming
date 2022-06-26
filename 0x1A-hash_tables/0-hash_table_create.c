#include "hash_tables.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(size);
	if (new_hash == NULL)
		return (NULL);

	return (new_hash);
}
