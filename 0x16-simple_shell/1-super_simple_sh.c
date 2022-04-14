/**
 * 4/13/2022
 * Notes: Managed to run the super simple shell, prints a prompt, reads a line
 * which is the path of the command to be run, and tries to execute it, altough
 * the problem seems to be the null terminating character at the end of the
 * line. After solving this, what's next is creating a child process that will
 * execute the provided command in the cwd. (Use a tokenizer function for remo-
 * ving the new line character and adding the null terminated character to the
 * command.)
 */


#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)

/**
 * _strlen - Calculates the lenght of a string.
 *
 * @s: A pointer to an array of characters.
 *
 * Return: The lenght of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 *
 */

/**
 * main - a first version of a super simple shell.
 *
 * Description: A super simple shell that can run commands with their full
 * path, without any argument.
 *
 * Return: Always 0.
 */
int main(void)
{
/*	pid_t child_pid;
	int status;*/
	size_t bufsize = 0;
	char *line = NULL;
	char *args[] = {NULL, NULL, NULL};

	while (1)
	{
		printf("#cisfun$ ");
		if ((getline(&line, &bufsize, stdin)) == -1)
		{
			perror("Error: Unable to read the line\n");
			exit(1);
		}
		printf("%s", line);
		args[0] = line;
		if ((execve(args[0], args, NULL)) == -1)
		{
        		perror("Error: Executing in child\n");
			return (1);
		}
	}
	return (0);
}
