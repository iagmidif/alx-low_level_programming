#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Finds and prints the largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int maxPrimeFactor, n;
	int i;

	n = 612852475143;
	maxPrimeFactor = 1;

	/*
	 * n is odd
	 * so there is no need to check for the factor 2
	 * get rid of the factors 3
	 */
	while (n % 3 == 0)
	{
		maxPrimeFactor = 3;
		n /= 3;
	}

	/*
	 * Now we have to only check for numbers
	 * which doesn't have the factors 2 and 3
	 */
	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			maxPrimeFactor = i;
			n /= i;
		}
		while (n % (i + 2) == 0)
		{
			maxPrimeFactor = i + 2;
			n /= (i + 2);
		}
	}
	if (n > maxPrimeFactor)
		maxPrimeFactor = n;
	printf("%lu\n", maxPrimeFactor);
	return (0);
}
