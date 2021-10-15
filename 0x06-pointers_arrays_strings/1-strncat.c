#include "main.h"
#include <stdio.h>

/**
 * _strncat - appends src string to dest string. Overwrites \0 end of dest.
 *		Uses at most n bytes from src; and src is not null-terminated
 *		if contains n or more bytes.
 *
 * @dest: points to the string where string will be copied
 * @src: points to the string to be copied
 * @n: takes the number of bytes from src to be appended to dest.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
/* By now, lenght is the number of characters before the null */
	for (i = 0; (src[i]) && (i < n); i++)
	{
		dest[lenght++] = src[i];
	}
	return (dest);
}
