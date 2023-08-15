#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @d: Character to be checked
 * Return: if character is lowercase, otherwise
 */
int _islower(int d)

{
	if (d >= 'd' && d <= 'z')
		return (1);
	else
		return (0);
}

