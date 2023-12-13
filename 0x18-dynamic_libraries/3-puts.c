#include "main.h"
/**
 * _puts - this function prints a string,
 * followed by a new line to stdout
 * @str: str, point.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
