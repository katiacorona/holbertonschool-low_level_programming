#include <stdio.h>

/**
 * main - prints _putchar exactly
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char output[8] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(output[i]);
	}
	putchar('\n');
	return (0);
}
