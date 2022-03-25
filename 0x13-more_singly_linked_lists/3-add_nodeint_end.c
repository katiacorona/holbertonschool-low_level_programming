#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: a pointer to the head node of the list.
 * @n: the integer number to be stored in the new node.
 *
 * Return: the address of the new element; NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
<<<<<<< HEAD
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;

	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}
	return (temp);
=======
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (new);
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b
}
