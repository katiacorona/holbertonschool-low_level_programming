#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *
 * @head: a pointer to the head element of the list.
 *
 * Return: the sum of all data of a linked list; 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
