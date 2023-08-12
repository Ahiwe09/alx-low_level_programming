#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints the alphabet in lowercase,
 * and then in uppercase.
 *
 * Return: Always return 0
 */

int main(void)
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'Z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar (d);
			d++;
		}
	putchar('\n');
	return (0);
}
