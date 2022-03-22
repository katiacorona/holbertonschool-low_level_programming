#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0s and 1s.
 *
 * Return: the converted number; return 0 if:
 *			chars in @b are other than 0 or 1.
 *			@b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int binary, decimal = 0, weight = 1;

	if (b == NULL)
	{
		return (0);
	}

	while (b[len])
	{
		len++;
	}

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			binary = 1;
		else
			binary = 0;

		decimal = decimal + (binary * weight);
		weight *= 2;
	}
	return (decimal);
}
