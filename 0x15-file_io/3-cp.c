#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

void close_check(int fd);
char *create_buffer(char *file);
void check97(int args);

/**
 * close_check - closes a fd and checks if was succesfully closed.
 *
 * @fd: the file descriptor.
 */
void close_check(int fd)
{
	int cl;

	cl = close(fd);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * create_buffer -	creates a buffer allocating up to 1024 bytes,
 *			and checks if can be written.
 *
 * @file: a pointer to the file where buffer bytes will be allocated.
 *
 * Return: a pointer to the buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * check97 - checks if the number of arguments equals 3.
 *
 * @args: the number of arguments passed to the function.
 */
void check97(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
}

/**
 * main - copies the contents of a file into another one.
 *
 * @argc: the number of arguments passed to the program.
 * @argv: an array of pointers to the arguments passed.
 *
 * Return:	if the arguments are != 3, exit code 97.
 *		if file_from cannot be read or doesn't exist, exit code 98.
 *		if file_to cannot be read or written, exit code 99.
 *		if file_to or file_from cannot be closed, exit code 100.
 */
int main(int argc, char *argv[])
{
	int o_from, o_to, r_from, w_to;
	char *buffer;

	check97(argc);
	o_from = open(argv[1], O_RDONLY);
	buffer = create_buffer(argv[2]);
	r_from = read(o_from, buffer, 1024);
	o_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (o_from == -1 || r_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		free(buffer);
		exit(98);
	}
	while (r_from > 0)
	{
		w_to = write(o_to, buffer, 1024);

		if (o_to == -1 || w_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
					argv[2]);
			exit(99);
		}
		r_from = read(o_from, buffer, 1024);
		o_to = open(argv[2], O_RDONLY | O_APPEND);
	}
	close_check(o_from);
	close_check(o_to);
	free(buffer);
	return (0);
}
