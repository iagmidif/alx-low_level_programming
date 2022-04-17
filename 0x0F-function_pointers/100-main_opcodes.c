#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - helps print the opcodes
 * @arr: address of the function
 * @n: number of bytes
 *
 * Return: void, nth
 */
void print_opcodes(char *arr, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", arr[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 * prints the opcode of its own
 * @argc: number of arguments received
 * @argv: pointer to an array of char pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)main, n);
	return (0);
}
