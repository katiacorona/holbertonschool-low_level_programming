#include <stdio.h>

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: a pointer to the string
 * @accept: a pointer to the substring
 * Return: the number of bytes in s that matches accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j--] == '\0')
		{
			break;
		}
	}
	return (i);
}
