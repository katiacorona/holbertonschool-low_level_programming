#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a dlistint_t linked list.
 *
 * @head: A pointer to the head node of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
