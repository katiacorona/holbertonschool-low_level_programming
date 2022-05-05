#include "main.h"

/**
 * check97 - checks if the number of arguments is right.
 *
 * @args: the number of arguments received in main function.
 */
void check97(int args)
{
	if (args != 3)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n");
		exit(97);
	}
}

/**
 * create_buffer - creates a buffer of 1024 bytes.
 *
 * @file: a pointer to the file where buffer will read from.
 *
 * Return: a pointer to the newlly allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (buffer);
}

/**
 * check_close - checks if a file descriptor
 *
 * @fd: the file descriptor close and check.
 */
void check100(int fd)
{
	int is_closed;

	is_closed = close(fd);

	if (is_closed == -1)
	{
		dprintf("Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: the number of arguments provided to the program.
 * @argv: a pointer to an array of arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int o_from, o_to, r_from, r_to, w_to;
	char *buffer = create_buffer(av[2]);

	check_97(ac);

	o_from = open(av[1], O_RDWR, 0664);
	

	Return (0);
}
