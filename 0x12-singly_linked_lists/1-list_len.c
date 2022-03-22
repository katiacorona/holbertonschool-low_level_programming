#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: a pointer to the head of the linked list_t list.
 *
 * Return: the number of elements in list_t.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	do
	{
		nodes++;
		h = h->next;
	} while (h);

	return (nodes);
}
