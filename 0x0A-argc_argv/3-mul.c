#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Multiplies two numbers.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: a pointer to the array of argument's strings.
 *
 * Return: 0 when successful, 1 if the program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
	int a, b, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = (atoi(argv[1]));
		b = (atoi(argv[2]));
		mult = a * b;
		printf("%d\n", mult);
	}
	return (0);
}
