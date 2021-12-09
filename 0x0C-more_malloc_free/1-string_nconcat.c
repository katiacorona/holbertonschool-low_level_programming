#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: a pointer to the first string to concatenate.
 * @s2: a pointer to the second string to concatenate.
 * @n: the number of bytes in s2.
 *
 * Return:	a pointer to the newlly allocated memory;
 *		on failure, return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len = n;
	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
	{
		return (NULL);
	}

	len = 0;
	for (i = 0; s1[i]; i++)
	{
		concat[len++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		concat[len++] = s2[i];
	}
	concat[len] = '\0';
	return (concat);
}
