#include <stdio.h>
#include "_putchar.h"

/**
 * main - prints _putchar exactly
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char output[9] = "_putchar\n";

	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(output[i]);
	}

	return (0);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
