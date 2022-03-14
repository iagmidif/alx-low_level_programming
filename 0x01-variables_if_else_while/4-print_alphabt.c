#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, except q and e.
 *
 * Return: 0
 */

int main(void)
{
	int i = 97;

	for (; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
