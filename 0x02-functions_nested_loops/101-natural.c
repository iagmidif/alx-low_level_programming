#include <stdio.h>

/**
 * main - entry point
 *  computes and prints the sum of all the multiples of 3 or 5 
 *  below 1024 (excluded), followed by a new line.
 *
 *  Returns: the sum
 */
int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (sum);
}
