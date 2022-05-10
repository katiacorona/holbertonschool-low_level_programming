#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform an operation.
 *
 * @s: a pointer to the operator passed as argument.
 *
 * Return: a pointer to the correct function;
 *			NULL if s does not match any operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL && strcmp(s, ops[i].op))
	{
		i++;
	}

	return (ops[i].f);
}
