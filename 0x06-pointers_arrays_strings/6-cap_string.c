#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: the string to return capitalized
 *
 * Return: the string capitalized
 */
char *cap_string(char *str)
{
	int i = 0;
	char separator = " \t\n,;.!?\"(){}";
	int n;

	while (str[i])
	{
		while ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			i++;
		}

		for (n = 0; (separator[n]) || (i == 0); n++)
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
