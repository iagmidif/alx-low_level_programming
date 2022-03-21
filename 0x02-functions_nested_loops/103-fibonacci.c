#include <stdio.h>

/**
 * main - entry point
 * By considering the terms in the Fibonacci sequence whose
 * values do not exceed 4,000,000, write a program that finds
 * and prints the sum of the even-valued terms, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a, b, tmp, sum;

	a = 1;
	b = 2;
	sum = 0;
	while (a < 4000000)
	{
		if (a % 2 == 0)
		{
			/* printf("%lu\n", a); */
			sum += a;
		}
		tmp = a + b;
		a = b;
		b = tmp;
	}
	printf("%lu\n", sum);
	return (0);
}
