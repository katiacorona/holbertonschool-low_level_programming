#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 *
 * @filename: a pointer to the filename.
 * @letters: the number of letters the function should read and print.
 *
 * Return:	the actual number of letters it could read and print.
 *		if the file cannot be read or opened, return 0.
 *		if filename is NULL, return 0.
 *		if write fails or does not print the expected bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);
	if (buffer == NULL || o  == -1 || r == -1 || w == -1)
	{
		return (0);
	}
	free(buffer);
	close(o);
	return (w);
}
