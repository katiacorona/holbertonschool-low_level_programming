#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: is the file to be read.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and print;
 *		0 if filename is NULL or if write fails or does not write the
 *		expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd_o, fd_r, fd_w;
	char *buf;

	buf = malloc(sizeof(char) * letters);

	fd_o = open(filename, O_RDONLY);
	fd_r = read(fd_o, buf, letters);
	fd_w = write(STDOUT_FILENO, buf, fd_r);

	if (buf == NULL || fd_o == -1 || fd_r == -1 || fd_w == -1)
		return (0);

	free(buf);
	close(fd_o);

	return (fd_w);
}
