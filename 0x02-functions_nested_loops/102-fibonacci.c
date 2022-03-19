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
	unsigned long int a, b, tmp;
	int i;

	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		if (i != 49)
			printf("%lu, ", a);
		else
			printf("%lu\n", a);
		tmp = a + b;
		a = b;
		b = tmp;
	}
	return (0);
}
