#include "main.h"

/**
 * *_strcat - appends src string to dest string. Overwrites \0 end of dest.
 * 		Then adds \0.
 *
 * @*dest: points to the string where string will be copied.
 * @*stc: points to the string to be copied.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int lenght = 0;

	while (src[lenght] != '\0')
	{
		lenght++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[lenght] = src[i];
		lenght++;
	}
	return (dest);
}
