#include "lists.h"

/**
 * add_node - adds a new node at the begginning of a list_t list.
 *
 * @head: the head of the list_t list.
 * @str: the string to be included in the new node.
 *
 * Return: the address of the new element; NULL on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = duplicate;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
