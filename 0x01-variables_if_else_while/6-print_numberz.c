#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all single digit
 * numbers of base 10 starting from 0.
 *
 * Return: Always return 0
 */
int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}

