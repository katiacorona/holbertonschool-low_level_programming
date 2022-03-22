/*
 * File: 6-print_numberz.c
 * Auth: Katia C
 */
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet reversed using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');
	return (0);
}
