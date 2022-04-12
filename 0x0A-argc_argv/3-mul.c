#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * program that multiplies two numbers.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: 0 on success
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3 || argc > 3)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

