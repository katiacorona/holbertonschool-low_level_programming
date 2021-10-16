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
	char separator[n];

	separator[] = " \t\n,;.!?\"(){}";
	while (str[i])
	{
		while ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			i++;
		}

		if (str[i--] == separator[n])
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
