#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a prompt and waits for the user to enter a command.
 *
 * @ac: the number of arguments provided.
 * @av: a double pointer to the array of arguments.
 *
 * Description: prints a prompt ($ ), and waits for a command as input from the
 * user, and then prints it in a new line.
 *
 * Return: always 0.
 */
int main(int __attribute__((unused))ac, char __attribute__((unused))**av)
{
	char *line = NULL;
	size_t bufsize = 50;

	line = malloc(sizeof(char) * bufsize);
	if (line == NULL)
	{
		printf("Error: Failed to allocate memory\n");
		exit(1);
	}

	printf("$ ");
	getline(&line, &bufsize, stdin);
	printf("%s", line);
	free(line);
	return (0);
}
