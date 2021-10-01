/*
 * File: 1-last_digit.c
 * Auth: Katia Corona
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Assigns random number to n and prints the last digit stored in n.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	s = n % 10;
	if (s > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, s);
	}
	else if (s == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, s);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
	}
	return (0);
}
