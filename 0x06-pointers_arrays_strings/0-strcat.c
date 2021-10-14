#include "main.h"
#include <stdio.h>

/**
 * _strcat - appends src string to dest string. Overwrites \0 end of dest.
 *		Then adds \0.
 *
 * @dest: points to the string where string will be copied
 * @src: points to the string to be copied
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lenght = 0;

	while (dest[lenght] != '\0')
	{
		lenght++;
	}
/* By now, lenght is the number of characters before the null */
	for (i = 0; src[i]; i++)
	{
		dest[lenght++] = src[i];
/* Adds each character of src string after the 6th character of dest string */
	}
	return (dest);
}
