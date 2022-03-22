#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_c - prints a char.
 *
 * @c: the character to be printed.
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_i - prints an int.
 *
 * @i: the int to be printed.
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - prints a float.
 *
 * @f: the float to be printed.
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_s - prints a string.
 *
 * @s: the string to be printed.
 */
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	print_t valid_t[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i, j;
	va_list args;
	char *separator = "";

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (valid_t[j].t != NULL)
		{
			if (format[i] == *(valid_t[j].t))
			{
				printf("%s", separator);
				valid_t[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
