#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ints with all the values from min to max.
 *
 * @min: the minimum of values to be included in the array.
 * @max: the maximum of values to be included in the array.
 *
 * Return:	if min > max, or if malloc fails, return NULL.
 *		otherwise, return a pointer to the newly allocated array.
 */
int *array_range(int min, int max)
{
	int *arr, i, len;

	if (min > max)
	{
		return (NULL);
	}

	len = (max - min + 1);
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
