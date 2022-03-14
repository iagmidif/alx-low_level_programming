#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
