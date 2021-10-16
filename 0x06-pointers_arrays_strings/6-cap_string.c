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
	int i = 0, n;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		while ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			i++;
		}

		for (n = 0; n <= 13; n++)
		{

			if ((str[i--] == sep[n]) || (i == 0))
			{
				str[i] -= 32;
			}
		}
		i++;
	}
	return (str);
}
