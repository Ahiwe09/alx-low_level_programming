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
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
