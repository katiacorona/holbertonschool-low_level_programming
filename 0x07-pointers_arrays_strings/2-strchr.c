#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string where @c will be located
 * @c: the character to be located
 * Return: a pointer to the first occurance;
 *		if not found, returns NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
