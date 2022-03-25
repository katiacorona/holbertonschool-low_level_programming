#include "lists.h"
/**
 * free_list - frees a list_t list.
 *
 * @head: a pointer to the head of the list;
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

<<<<<<< HEAD
	while (head != NULL)
=======
	while (head)
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
