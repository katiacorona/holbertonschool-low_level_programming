#include "main.h"

/**
 * _sqrt_natural - checks for perfect square root of a number
 * @q: the square root
 * @b: the base number
 * Return: if @b has a natural square root, return q;
 *		if @b has no natural square root, return -1.
 */
int _sqrt_natural(int q, int b)
{
	if ((q * q) > b)
	{
		return (-1);
	}
	if ((q * q) == b)
	{
		return (q);
	}
	return (_sqrt_natural((q + 1), b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number eleveted to the power of 2
 * Return: the natural square root of n; if no natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_natural(1, n));
}
