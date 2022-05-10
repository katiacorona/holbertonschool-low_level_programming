/*
 * File: 6-print_numberz.c
 * Auth: Katia C
 */
#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10, start from 0, use putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar((num % 10) + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
