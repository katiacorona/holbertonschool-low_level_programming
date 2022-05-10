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

	if (index == 0)
	{
		if ((*head)->next == NULL)
			*head = NULL;
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
		}
		return (1);
	}

	temp = *head;
	for (; index > 0; index--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	temp = NULL;

	free(temp);
	return (1);
}
