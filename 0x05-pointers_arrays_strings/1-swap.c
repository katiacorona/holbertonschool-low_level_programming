#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: integer to be swapped.
 * @b: integer that will replace a.
 *
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int w;

	w = *a;
	*a = *b;
	*b = w;
}
