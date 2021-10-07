#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lower case
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
		l++;
	}
	_putchar('\n');
}
