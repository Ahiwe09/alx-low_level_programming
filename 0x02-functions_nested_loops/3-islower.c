#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: Character to be checked
 * Return: if character is lowercase, otherwise
 */
int _islower(int c)

{
	if (c >= 'c' && c <= 'z')
		return (1);
	else
		return (0);
}

