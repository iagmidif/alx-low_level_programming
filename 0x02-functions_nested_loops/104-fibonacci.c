#include <stdio.h>

/**
 * main - entry point
 *  finds and prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 *  Return: 0
 */
int main(void)
{
	unsigned long a, b, tmp;
	int i;

	a = 1;
	b = 2;
	tmp = 0;
	for (i = 0; i < 98; i++)
	{
		tmp = a + b;
		if (i == 97)
			printf("%lu\n", b);
		else if (i == 0)
			printf("%lu, %lu, ", a, b);
		else
			printf("%lu, ", b);
		a = b;
		b = tmp;
	}
	return (0);
}
