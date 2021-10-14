#include "main.h"

/**
 * *_strcpy(char *dest, char *src);
 *
 * @dest: pointer to buffer where string will be copied
 * @src: points to the string to be copied
 *
 * Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int lenght = 0;
	int i;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; i < lenght; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
