#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: takes the string to take the characters from
 */
void puts2(char *str)
{
	int longitud = 0;
	int i;

	while (str[longitud] != '\0')
	{
		longitud++;
	}

	for (i = 0; i < longitud; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
