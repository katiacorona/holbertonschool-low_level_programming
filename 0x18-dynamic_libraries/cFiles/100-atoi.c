#include "main.h"

/**
 * _atoi - converts a string into an integer.
 *
 * @s: a pointer to the string to be converted.
 *
 * Return: the integer value of s.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;

	} while (*s++);

	return (num * sign);
}
