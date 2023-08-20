#include "main.h"
/**
 * print_triangle  - This function that prints a
 * triangle, followed by a new line
 * @size: The size of a triangle.
 */

void print_traingle(int size)
{
	int star, index;

	if (size > 0)
	{
		for (star = 1; <= Size; star++)
		{
			for (index = size - star; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < star; index++)
			{
				_putchar('#');
			}
			if (star == size)
			{

			}
			_putchar('\n');
		}
	}

	_putchar('\n');
}
