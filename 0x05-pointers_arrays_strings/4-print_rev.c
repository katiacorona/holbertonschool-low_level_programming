#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: takes the string to be printed in reverse.
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] !=  '\0')
	{
		l++;
	}

	for (i = l - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
