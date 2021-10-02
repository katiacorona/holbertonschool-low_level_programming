/*
 * File: 3-print_alphabets.c
 * Auth: Katia C
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase using putchar.
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

	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar ('\n');
	return (0);
}
