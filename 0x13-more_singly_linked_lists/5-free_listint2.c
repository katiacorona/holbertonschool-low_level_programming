#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets the head to NULL.
 *
 * @head: a double pointer to the first element of the list.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
