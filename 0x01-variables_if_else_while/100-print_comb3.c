#include <stdio.h>

/**
 * main - Entry point, prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int decenas;
	int unidades;

	for (decenas = 0; decenas <= 9; decenas++)
	{
		for (unidades = decenas + 1; unidades <= 9; unidades++)
		{
			putchar((decenas % 10) + '0');
			putchar((unidades % 10) + '0');

			if (decenas < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
