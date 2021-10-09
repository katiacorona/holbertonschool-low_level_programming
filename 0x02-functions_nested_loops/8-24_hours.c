#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of Jack Bauer.
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh <= 23; hh++)
	{
		for (mm = 0; mm <= 59; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0','\n');
		}
	}
}
