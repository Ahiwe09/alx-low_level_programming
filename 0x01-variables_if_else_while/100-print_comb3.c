#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible different combinations
 * of two digits.
 *
 * Return: Always return 0
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '8'; tens++)
	{
		for (ones = tens + 1; ones <= '9'; ones++)
		{
			putchar(tens);
			putchar(ones);

			if (tens != '8' || ones != '9')
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
