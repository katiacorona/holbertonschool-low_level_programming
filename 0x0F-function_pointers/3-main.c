#include "calc.h"
#include <stdio.h>

/**
 * main - entry point.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: a pointer to the array of arguments.
 *
 * Return: the result of the operation called by the user.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int a, int b);
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];
	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(a, b));

	return (0);
}
