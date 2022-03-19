#include <stdio.h>

/**
 * main - entry point
 * prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	unsigned int a, b, tmp, i;

	a = 0;
	b = 1;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%u, ", a);
		else
			printf("%u\n", a);
		tmp = a + b;
		a = b;
		b = tmp;
	}
	return (0);
}
