#include <stdio.h>

/**
 * main - Entry point, prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int centenas;
	int decenas;
	int unidades;

	for (centenas = 0; centenas <= 9; centenas++)
	{
		for (decenas = centenas + 1; decenas <= 9; decenas++)
		{
			for (unidades = decenas +1; unidades <= 9; unidades++)
			{
				putchar((centenas % 10) + '0');
				putchar((decenas % 10) + '0');
				putchar((unidades % 10) + '0');

				if (centenas < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
