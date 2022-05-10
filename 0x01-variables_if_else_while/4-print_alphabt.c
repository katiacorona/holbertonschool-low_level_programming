/*
 * File: 4-print_alphabt.c
 * Auth: Katia C
 */

#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase skipping q and e.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
			letter++;
		}
		else
		{
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
