#include "main.h"

/**
 * puts_half - prints half of a string
 *		and if string / 2 is odd, prints (lenght - 1) / 2.
 *
 * @str: takes the string from which the characters will be printed.
 */
void puts_half(char *str)
{
	int lenght = 0;
	int i;
	int halfStr;

	while (str[lenght] !=  '\0')
	{
		lenght++;
	}

	if ((lenght % 2) == 0)
	{
		halfStr = (lenght / 2);
	}

	else
	{
		halfStr = ((lenght - 1) / 2);
	}

	for (i = 0; i <= halfStr; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
