#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 *
 * Return: void, nothing
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			if (h < 10)
				printf("0");
			printf("%d:", h);
			if (m < 10)
				printf("0");
			printf("%d\n", m);
		}
	}
}
