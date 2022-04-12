#include <stdio.h>

/**
 * main - entry point
 * program that prints the number of arguments passed into it.
 * @argc: number of commands used
 * @argv: pointer to an array of char pointers
 *
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
