#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the program that prints
 * the alphabet in lowercase, followed by a new line.
 *
 * Return: Always return 0
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' && c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
