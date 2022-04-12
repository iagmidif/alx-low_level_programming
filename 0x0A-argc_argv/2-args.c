#include <stdio.h>

/**
 * main - entry point
 * program that prints all arguments it receives.
 * @argc: number of commands recieved
 * @argv: pointer to an array of char pointers
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
