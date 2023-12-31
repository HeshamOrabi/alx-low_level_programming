#include "main.h"

/**
 * read_textfile - read a text from file then print to stdout
 * @filename: name of the file
 * @letters: how many letters to print
 *
 * Return: number of letterprinted, 0 if fails
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);

	nr = read(fd, buf, letters);


	nw = write(STDOUT_FILENO, buf, nr);

	if (nr != nw)
	{
		return (0);
	}

	free(buf);
	close(fd);

	return (nw);
}
