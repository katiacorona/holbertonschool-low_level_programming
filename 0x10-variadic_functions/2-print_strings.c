#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings with a separator
 * @separator: points to the string separator
 * @n: the number of strings passed to the function
 * @...: a variable number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n -1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(strings);
	printf("\n");
}
