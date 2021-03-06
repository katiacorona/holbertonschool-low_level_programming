#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name.
 *
 * @name: a pointer to the name.
 * @f: a function pointer to the options for printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || f == NULL)
		return;
	f(name);
}
