#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies an n number of bytes from src into dest.
 *
 * @dest: points to the string where string will be copied
 * @src: points to the string to be copied
 * @n: takes the bytes to be copied from src into dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_lenght = 0;

	while (src[src_lenght] != '\0')
	{
		src_lenght++;
	}

	for (i = 0; (dest[i]) && (i < n); i++)
	{
		dest[i] = src[i];
	}

	for (i = src_lenght; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
