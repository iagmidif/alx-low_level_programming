#include <stdio.h>

/**
 * main - entry point
 * program that prints its name, followed by a new line.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = argc - argc;

	printf("%s\n", argv[i]);
	return (0);
}
