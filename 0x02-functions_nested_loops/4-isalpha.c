#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @i: alpabet to check for
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int i)
{
	return ((i >= 'a' &&  <= 'z') || (i >= 'A' && i <= 'Z'));

}
