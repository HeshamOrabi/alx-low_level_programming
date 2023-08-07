#include "main.h"

/**
 * create_file - create a file if it doesnot exist anf write to it
 * @filename: str of the file name
 * @text_content: text to write
 *
 * Return: 1 success, 0 fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, wr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
	}

	wr = write(fd, text_content, len);

	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}
