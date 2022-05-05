#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file - creates a file; if text_content is NULL, creates an empty file
 *		and the created file is rw-------. If already exists, does not
 *		change permissions.
 * @filename: is the file to be read.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success; -1 on failure (file cannot be created, written,
 *			write fails, filename is NULL etc...)
 */
int create_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, len = 0;

	while (text_content[len])
		len++;

	fd_o = open(filename, O_RDWR | O_TRUNC | O_CREAT, S_IRUSR ^ S_IWUSR);
	fd_w = write(fd_o, text_content, len);

	if (filename == NULL || fd_o == -1 || fd_w == -1)
		return (-1);

	close(fd_o);
	return (1);
}
