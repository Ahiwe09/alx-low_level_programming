#include "main.h"
/**
 * print_rev - prints a string, in reverse,
 * followed by a new line.
 * @s: str
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int leni = 0;

	int i;

	while (*s != '\0')
	{
		leni++;
		s++;
	}
	s--;
	for (i = leni; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
