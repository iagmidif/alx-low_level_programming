#include <stdio.h>

/**
 * main -  prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	int i = 122;

	for (; i >= 97; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
