#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * program that generates random valid passwords for the program 101-crackme
 * - Analysis on how I cracked it is below
 *
 * Return: 0
 */
int main(void)
{
	int random, ascii = 2772;

	srand(time(0));
	while (ascii > 0)
	{
		random = rand() % 127; /* so that char be at most 126 */
		if (ascii > random)
		{
			putchar(random);
			ascii -= random;
		}
		else if (ascii > 0)
		{
			putchar(ascii);
			ascii = 0;
		}
	}
	return (0);
}
/**
 * Analysis
 * I looked disassembled 101-crackme using gdb (I used intel syntax)
 * On address 0x004005e9 it compares the passed password with a number
 * - cmp qword [var_8h], 0xad4 ; in this case var_8h is the password
 * - and 0xad4 is the number which equals to the decimal number 2772
 * So any string that ascii value sums up to 2772 is a valid password
 */
