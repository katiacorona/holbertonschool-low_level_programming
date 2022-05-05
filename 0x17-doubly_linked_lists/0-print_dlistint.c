#include "lists.h"

/**
 * print_dlistint - Print all the elements of a dlistint_t list.
 *
 * @h: a pointer to the head node of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
