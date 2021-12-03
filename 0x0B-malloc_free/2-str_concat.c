#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: a pointer to the string to be concatenated in first place.
 * @s2: a pointer to the string to be concatenated after s1 contents.
 *
 * Return: a pointer to a newly allocated space with contents of s1 and s2;
 *		NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j = 0, len = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len++;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc(sizeof(char) * (len + 1));
	if (s3 == 0)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		s3[j] = s1[i];
		j++;
	}
	for (i = 0; s2[i]; i++)
	{
		s3[j] = s2[i];
		j++;
	}
	return (s3);
}
