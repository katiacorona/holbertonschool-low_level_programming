#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dim array of ints.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return:	a pointer to the 2 dimensional array of ints;
 *		if width = 0, height = 0, or failure, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
