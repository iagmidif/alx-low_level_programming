#include "3-calc.h"

/**
 * main - entry point
 *  - performs simple operations.
 *  - Usage: calc num1 operator num2
 * @argc: number of commands recieved
 * @argv: pointer to an array of char pointers
 *
 * Return: 0 if successful
 * 98, 99, 100 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") && strcmp(argv[2], "-") && strcmp(argv[2], "*")
			&& strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") || strcmp(argv[2], "%"))
			&& (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", ((*(get_op_func(argv[2])))(atoi(argv[1]), atoi(argv[3]))));

	return (0);
}
