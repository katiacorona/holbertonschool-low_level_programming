#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arary of ints
 *			n is the number of elements
 *			numbers must be separated by comma
 *
 * @a: the array of integers
 * @n: number of elements of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
