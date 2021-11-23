#include "main.h"

/**
 * create_file - creates a file with rw------- permissions.
 *
 * @filename: a pointer to the file name.
 * @text_content: a pointer to a NULL terminated string.
 *
 * Return:	1 on sucess;
 *		-1 on failure (file cannot be created, written, write fails),
 *		or if filename is NULL.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_TRUNC | O_RDWR | O_CREAT, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1 || filename == NULL || len == -1)
	{
		return (-1);
	}
	close(o);
	return (1);
}
