#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number an prints its sign
 *
 * Return: 0
 */

int main(void)
{
	int n, n_lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_lastDigit = n % 10;

	if (n_lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n_lastDigit);
	else if (n_lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, n_lastDigit);
	else if (n_lastDigit < 6 && n_lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
