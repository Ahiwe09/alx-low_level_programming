#include "main.h"
/**
 * print_triangle  - This function that prints a
 * triangle, followed by a new line
 * @size: The size of a triangle.
 */
void print_triangle(int size)
{
	int star, index;

	if (size > 0)
	{
		for (star = 1; star <= size; star++)
		{
			for (index = size - star; index > 0; index--)
			{
				_putchar(' ');
			}
			if (star == size)
			{
				_putchar('#');
			}
			if (star == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
