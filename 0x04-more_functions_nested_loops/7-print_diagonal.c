#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * using the '\' character in the terminal.
 * @n: number of times the '\' character
 * should be printed.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int e, f;

		for (e = 1; e <= n; e++)
		{
			for (f = 1; f <= e - 1; f++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
