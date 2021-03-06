#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: takes a number to return its last digit.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int lastDigit = (n % 10);

	if (lastDigit < 0)
	{
		lastDigit *= (-1);
	}

	_putchar(lastDigit + '0');
	return (lastDigit);
}
