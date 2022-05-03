#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to be read na printed
 * @letters: number of letters to be read and printed
 *
 * Return: number of letters read and printed,
 * 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t nbytes, n;

	if (filename == NULL || letters <= 0)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nbytes = read(fd, buf, letters);
	if (nbytes == -1)
		return (0);

	buf[nbytes] = '\0';

	n = write(STDOUT_FILENO, buf, nbytes);
	if (n == -1)
		return (0);

	n = close(fd);
	if (n == -1)
		return (0);

	return (nbytes);
}
