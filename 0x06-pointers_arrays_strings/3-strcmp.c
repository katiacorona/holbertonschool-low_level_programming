#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared against s1
 *
 * Return: If str1 < str2, returns the difference of non equal characters.
 *		If str1 == str2, returns 0.
 *		If str1 > str2, returns the difference of non equal characters.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((*(s1 + i) && *(s2 + i)) && ((*s1 + i) == *(s2 + i)))
	{
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
