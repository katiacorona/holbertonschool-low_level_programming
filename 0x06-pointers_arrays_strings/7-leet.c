#include "main.h"

/**
 * leet - encodes a string into 1337.
 *		Letters 'a' and 'A' replaced by '4'
 *		Letters 'e' and 'E' replaced by '3'
 *		Letters 'o' and 'O' replaced by '0'
 *		Letters 't' and 'T' replaced by '7'
 *		Letters 'l' and 'L' replaced by '1'
 *
 * @str: points to the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *str)
{
	int ind1, ind2;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (ind1 = 0; str[ind1]; ind1++)
	{
		for (ind2 = 0; ind2 <= 9; ind2++)
		{
			if (a[ind2] == str[ind1])
			{
				str[ind1] = b[ind2];
			}
		}
	}
	return (str);
}
