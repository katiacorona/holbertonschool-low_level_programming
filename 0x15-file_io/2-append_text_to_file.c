#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: a pointer to the name of the file.
 * @text_content: a pointer to a NULL terminated string to append.
 *
 * Return:	1 on success;
 *		-1 on failure, if filename is NULL, if the file does not exist,
 *		if the permissions are not the required ones.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}
	o = open(filename, O_APPEND | O_RDONLY | O_WRONLY, 0664);
	w = write(o, text_content, len);

	if (o == -1 || w == -1 || filename == NULL)
	{
		return (-1);
	}
	close(o);
	return (1);
}
