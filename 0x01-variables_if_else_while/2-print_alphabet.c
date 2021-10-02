/*
 * File: 2-print_alphabet.c
 * Auth: Katia C
 */

#include <stdio.h>

/**
 * main - Prints lowercase alphabet using putchar only.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
