#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 when lowercase and 0 otherwise.
 * @c: takes the character to be evaluated.
 *
 * Return: 1 if lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);

	else
		return (0);
}
