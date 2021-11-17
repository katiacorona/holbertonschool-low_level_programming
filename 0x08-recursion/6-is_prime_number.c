#include "main.h"

/**
 * check_for_prime - checks if a given number is a prime number
 * @m: first factor
 * @p: the number to be evaluated
 * Return: 1 if it's a prime number;
 *		otherwise, return 0
 */
int check_for_prime(int m, int p)
{
	if ((p <= 1) || (p % m == 0))
	{
		return (0);
	}
	else if (m > (p / 2))
	{
		return (1);
	}
	return (check_for_prime((m + 1), p));
}

/**
 * is_prime_number - returns -1 if n is a prime number
 * @n: the integer to be checked
 * Return: if @n is a prime number, return -1;
 *		otherwise, return 0
 */
int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (check_for_prime(2, n));
}
