#include "main.h"
/**
 * print_square - Prints a square pattern using the
 * '#' character in the terminal.
 * @size: The size of the square to be displayed.
 */
void print_square(int size)
{
	int a, b;

	b = 0;

	if (size < 1)
		_putchar('\n');
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
	}
}
