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
<<<<<<< HEAD
	list_t *new_node, *last_node;
	int len = 0;
	char *duplicate;
=======
	list_t *new_node, *temp;
	int len = 0;
	char *strcp;
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

<<<<<<< HEAD
	duplicate = strdup(str);
	if (duplicate == NULL)
=======
	strcp = strdup(str);
	if (strcp == NULL)
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b
	{
		free(new_node);
		return (NULL);
	}

<<<<<<< HEAD
	while (str[len])
		len++;

	new_node->str = duplicate;
=======
	while (strcp[len])
		len++;

	new_node->str = strcp;
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
<<<<<<< HEAD
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
=======
		*head = new_node;

	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
>>>>>>> f983bccc5d5d7b34571879f7d00595cdc6ed132b
	}

	return (new_node);
}
