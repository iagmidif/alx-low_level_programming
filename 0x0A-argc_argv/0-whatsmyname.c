#include <stdio.h>

/**
 * main - entry point
 * program that prints its name, followed by a new line.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
