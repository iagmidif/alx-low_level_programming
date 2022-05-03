#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>

/**
 * main - entry point
 * program that copies the content of a file to another file.
 * Usage: cp file_from file_to
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n1, n2, readBytes, writeBytes;
	char *buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	readBytes = read(fd_from, buf, 1024);
	while (readBytes != 0)
	{
		if (readBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		writeBytes = write(fd_to, buf, readBytes);
		if (writeBytes == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		readBytes = read(fd_from, buf, 1024);
	}

	n1 = close(fd_from);
	n2 = close(fd_to);
	if (n1 == -1 || n2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				((n1 == -1) ? fd_from : fd_to)), exit(100);
	return (0);
}
