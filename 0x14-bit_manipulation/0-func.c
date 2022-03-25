#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 *
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number;
 *		0 if there is a char different to 0 or 1 or if @b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int binary, weight = 1, decimal = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] == '0')
			binary = 0;

		else if (b[len] == '1')
			binary = 1;

		else
			return (0);

		decimal += (weight * binary);
		weight *= 2;
	}
	return (decimal);
}
