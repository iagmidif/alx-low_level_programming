#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;

	for (; i <= 57; i++)
		putchar(i);
	i = 97;
	for (; i <= 102; i++)
		putchar(i);
	putchar('\n');

	return (0);
}
