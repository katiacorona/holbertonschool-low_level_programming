/*
 * File: 3-islower.c
 * Auth: Katia C
 */
#include <stdio.h>
#include "main.h"

/**
 * _islower - returns 1 when lowercase, and 0 otherwise.
 *
 * c - takes the value in ascii for an int type.
 *
 * return: Always 0 (Successful)
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		_putchar(1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		_putchar(0);
	}
	return (0);
}
