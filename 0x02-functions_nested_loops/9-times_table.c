#include "main.h"
/**
 * times_table - Prints a multiplication table.
 *
 * Description: Prints the multiplication table for numbers from 0 to 9.
 * Return: Nothing.
 */
void times_table(void)
{
	int row, col, result;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			result = row * col;

			if ((result / 10) == 0)
			{
				if (col != 0)
					_putchar(32);
				_putchar(result + 48);

				if (col == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);

				if (col == 9)
					continue;
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
	}
}

