#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: a pointer to the head node of the list.
 * @index: the index of the node to be returned by the function
 *			(starting from 0).
 *
 * Return: the node at index position of the list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *ptr;

	ptr = head;
	for (count = 0; count <= index; count++)
	{
		ptr = ptr->next;
		if (count == index)
			break;

		if (ptr->next == NULL && count < index)
			return (NULL);
	}
	return (ptr);
}
