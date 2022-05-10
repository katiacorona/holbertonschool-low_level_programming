#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a new node at a given position.
 *
 * @head: A pointer to the head node of the list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;
	for (; index > 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head) /* index == 0, handles list of 1 or more nodes */
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else /* index > 0, handles list of 1 or more nodes */
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL) /* if index is not end of the list */
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
