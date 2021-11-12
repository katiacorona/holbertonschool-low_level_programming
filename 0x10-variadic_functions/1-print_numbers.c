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
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			i++;
		}
		else
		{
			printf("%d", va_arg(list, int));
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	va_end(list);
	printf("\n");
}
