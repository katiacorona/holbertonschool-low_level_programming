#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 *
 * @head: A pointer to the head node of the list.
 * @n: The data to be stored in the newly created node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
