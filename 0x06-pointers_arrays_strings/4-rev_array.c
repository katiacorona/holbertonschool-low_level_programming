#include "main.h"

/**
 * reverse_array - reverses the contents of an array with n number of elements
 *
 * @n: the number of elements in the array
 * @a: points to the array to be reversed
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
