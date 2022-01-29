#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Task 3 functions and structs */

/**
 * struct print - defines a new type to print types.
 *
 * @t: the type to print.
 * @f: the function associated with the type.
 */
typedef struct print
{
	char *t;
	void (*f)(va_list);
} print_t;

void print_c(va_list c);
void print_i(va_list i);
void print_f(va_list f);
void print_s(va_list s);

#endif /* VARIADIC_FUNCTIONS_H */
