#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers.
 *
 * Return: Always return 0
 */
int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}

