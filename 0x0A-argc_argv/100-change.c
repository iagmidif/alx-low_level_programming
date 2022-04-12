#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: 0 on success
 * 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, r, n, coins;
	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	r = n;
	coins = 0;
	for (i = 0; r > 0; i++)
	{
		while (r >= cents[i])
		{
			r -= cents[i];
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
