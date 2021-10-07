#include "main.h"
#include "_putchar.c"

/**
 * main - prints _putchar exactly
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c);

int main(void)
{
	char c[9] = "_putchar\n";

	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}

	return (0);
}
