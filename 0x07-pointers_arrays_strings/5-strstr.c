#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string
 * @needle: the substring to look for inside @haystack
 * Return: a pointer to the beggining of the located substring,
 *		or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int j, i;

	for (j = 0; needle[j]; j++)
	{
		for (i = 0; haystack[i]; i++)
		{
			if (needle[j] == haystack[i])
			{
				return (needle + j);
			}
			else if (haystack[i] == '\0')
			{
				break;
			}
		}
		break;
	}
	return (0);
}
