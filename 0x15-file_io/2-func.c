#include "main.h"

/**
 * append-text_to_file - appends text at the end of a file.
 *
 * @filename: a pointer to the name of the file.
 *
 * @text_content: a pointer to a NULL terminated string to add at the end of
 *		the file.
 *
 * Return: 1 on success (if file exists); -1 on failure (if the file does not
 *		exist or if you do not have the required permissions to write
 *		the file).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_o, fd_w, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd_o = open(filename, O_RDONLY | O_WRONLY | O_APPEND, 0664);
	fd_w = write(fd_o, text_content, len);

	if (fd_o == -1 || fd_w == -1 || len <= 0 || filename == NULL)
		return (-1);

	close(fd_o);

	return (1);
}
