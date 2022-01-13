#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: a pointer to the name.
 * @f: a function pointer to the options for printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_uppercase)
		print_name_uppercase(name);
	else if (f == print_name_as_is)
		print_name_as_is(name);
}
