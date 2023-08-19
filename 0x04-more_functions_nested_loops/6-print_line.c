#include "main.h"
/**
 * print_line - Write a function that draws
 * a straight line in the terminal.
 * @n: The number of times the characters to be printed.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n && n > 0; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

