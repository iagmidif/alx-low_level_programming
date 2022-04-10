#include <stdio.h>

int main(void)
{
	char a[5][4];
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("(%d, %d) => %p\n", i, j, &a[i][j]);
		}
	}
	return 0;
}
