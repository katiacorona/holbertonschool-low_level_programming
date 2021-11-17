#include <stdio.h>

/**
 * main - Entry point. Prints the number of arguments passed to the program.
 *
 * @argc: the number of arguments passed.
 * @argv: a pointer to the arguments strings.
 *
 * Return: Always 0.
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
