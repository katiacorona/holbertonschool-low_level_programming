#include <stdio.h>
#include "main.h"

/**
 * _abs - Computes the absolute value of n.
 *
 * @n: Takes the int to be returned as an absolute.
 *
 * Return: The absolute of n.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
		return (-n);
}
