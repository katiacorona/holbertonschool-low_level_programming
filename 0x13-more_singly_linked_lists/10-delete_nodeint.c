#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 *
 * @head: a double pointer to the head node of the list.
 * @index: the index of the node to delete.
 *
 * Return: 1 if it succeeded; -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL)
		return  (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	for (node = 0; node < (index); node++)
	{
		if (current == NULL)
			return (-1);

		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
