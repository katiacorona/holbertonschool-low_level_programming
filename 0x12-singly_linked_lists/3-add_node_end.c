#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *
 * @head: a double pointer to the head node.
 * @str: the string to be added at the end of the list_t list.
 *
 * Return: the address of the new element; NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int len = 0;
	char *strcp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	strcp = strdup(str);
	if (strcp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (strcp[len])
		len++;

	new_node->str = strcp;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
