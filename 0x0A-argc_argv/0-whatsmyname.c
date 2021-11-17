#include "main.h"
#include <stdio.h>

/**
 * main - Entry point. Prints program's name.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: the arguments passed to the program.
 *
 * Return: Always 0.
 */
int main (int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
