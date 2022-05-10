#include "main.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @s: takes the string to find the lenght of
 *
 * Return: lenght of s
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
