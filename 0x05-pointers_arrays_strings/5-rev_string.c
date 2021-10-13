#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: takes the string to be reversed.
 */
void rev_string(char *s)
{
	int longitud = 0;
	int i;
	char temp;

	while (s[longitud] != '\0')
	{
		longitud++;
	}

	for (i = 0; i < (longitud / 2); i++)
	{
		temp = s[i];
		s[i] = s[longitud - i - 1];
		s[longitud - i - 1] = temp;
	}
}
