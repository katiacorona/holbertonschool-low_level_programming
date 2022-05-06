#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position.
 *
 * @h: A pointer to the head node of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed or if it
 * is not possible to add the new node at the index idx.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *ante;

	if (h == NULL)
		return (NULL);

	if (idx == 0) /* idx is the beginning of the list */
		return (add_dnodeint(h, n));

	ante = *h;
	for (; idx > 1; idx--)
	{
		ante = ante->next;
		if (ante == NULL)
			return (NULL);
	}

	if (ante->next == NULL) /* idx is the end of the list */
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
       /**
	* temp now points to one node before the position where the new
	* node will be inserted.
	*/
	new->n = n;
	new->next = ante->next;
	new->prev = ante;
	ante->next = new;
	new->next->prev = new;

	return (new);
}
