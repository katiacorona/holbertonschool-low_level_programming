#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 *
 * @array: a pointer to an array of integers.
 * @size: the size of the array.
 * @cmp: a pointer to the function to be used for comparing values.
 *
 * Return: the index of the first element;
 *			-1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (0);
}
