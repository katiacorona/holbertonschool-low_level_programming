#include "main.h"

/**
 * print_numbers - prints the numbres from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int i = 0;

	while (i >= '0' && i <= '9')
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
