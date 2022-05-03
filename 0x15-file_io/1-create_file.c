#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success,
 * -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (0);

	len = strlen(text_content);
	n = write(fd, text_content, len);
	if (n == -1)
	{
		close(fd);
		return (-1);
	}

	n = close(fd);
	if (n == -1)
		return (-1);

	return (1);
}
