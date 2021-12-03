#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: a pointer to the string to be copied.
 *
 * Return: a pointer to the duplicate string;
 *		NULL if it str = NULL, or if memory is insufficient.
 */
char *_strdup(char *str)
{
	char *new;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	new = malloc(sizeof(char) * len);
	if (new == 0)
	{
		return (NULL);
	}
	i = 0;
	for (i = 0; str[i]; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
