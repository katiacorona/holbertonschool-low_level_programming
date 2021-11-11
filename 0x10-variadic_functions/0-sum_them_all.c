#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: takes the parameters to be added
 * Return: the sum of all parameters; if n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
