#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: a pointer to a string that separates numbers
 * @n: the number of integers passed to the funtion
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if ((i != (n - 1)) && (separator != NULL))
			{
				printf("%s", separator);
			}
	}
	va_end(nums);
	printf("\n");
}
