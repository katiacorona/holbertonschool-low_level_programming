#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0s and 1s.
 *
 * Return: the converted number;
 *		or return 0 if:
 *			chars in @b are other than 0 or 1.
 *			@b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num = 0, mult = 1;

	if (b == NULL)
	{
		return (0);
	}
	for (len = 0; b[len];)
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
