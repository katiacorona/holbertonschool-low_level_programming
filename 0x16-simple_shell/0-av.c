#include <unistd.h>
#include <stdio.h>

/**
 * main - entry point. Prints all arguments passed to the program
 *
 * @ac: the number of arguments passed to the function.
 * @av: a double pointer to the arguments.
 *
 * Return: always 0.
 */
int main(int __attribute__((unused))ac, char **av)
{
	unsigned int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
