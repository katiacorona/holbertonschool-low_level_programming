/*
 * File: 5-print_numbers.c
 * Auth: Katia C
 */
#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	printf("\n");
	return (0);
}
