#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Adds two positive numbers.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: a pointer to the array of argument's strings.
 *
 * Return: 0 if successful, 1 otherwise.
 */
int main(int argc, char *argv[])
{
	int a, num, digit = 0, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			a = (atoi(argv[num]));
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
