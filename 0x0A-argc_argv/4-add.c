#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * program that adds positive numbers.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: 0 on success
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum, n;

	if (argc == 1)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			if (n > 0)
				sum += n;
			else if (*argv[i] != 48 && atoi(argv[i]) <= 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
