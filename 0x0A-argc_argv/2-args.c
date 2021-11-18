#include <stdio.h>

/**
 * main - Entry point. Prints all arguments it receives.
 *
 * @argc: the number of arguments the program receives.
 * @argv: a pointer to the array of argument's strings.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
