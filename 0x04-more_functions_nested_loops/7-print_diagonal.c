#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 * @n: takes the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			if (i == n)
			{
				continue;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
