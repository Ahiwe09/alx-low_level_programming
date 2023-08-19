#include "main.h"
/**
 * more_numbers - prints 10 sequences of numbers,
 * each containing the digits
 * from 0 to 14, followed by a new line.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int n, e;
for (n = 0; n < 10; n++)
	for (e = 0; e < 15; e++)
	{
		if (e >= 10)
		_putchar(e / 10 + '0');
		_putchar(e % 10 + '0');
	}
	_putchar('\n');
}
}
