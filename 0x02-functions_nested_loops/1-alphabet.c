#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lower case
 */


void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
