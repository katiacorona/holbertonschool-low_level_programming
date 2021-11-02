#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a pointer to the string
 * @accept: a pointer to the set of bytes
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 *		Null if no such byte was found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			else if (accept[j] == '\0')
			{
				break;
			}
		}
	}
	return (0);
}
