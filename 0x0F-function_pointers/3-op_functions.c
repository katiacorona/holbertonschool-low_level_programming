#include "calc.h"

/**
 * op_add - returns the sum of two numbers.
 *
 * @a: the first addend.
 * @b: the second addend.
 *
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers.
 *
 * @a: the minuend.
 * @b: the subtrahend.
 *
 * Return: a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers.
 *
 * @a: the first factor.
 * @b: the second factor.
 *
 * Return: a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers.
 *
 * @a: the dividend.
 * @b: the divisor.
 *
 * Return: a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of a / b.
 *
 * @a: the dividend.
 * @b: the divisor.
 *
 * Return: a % b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
