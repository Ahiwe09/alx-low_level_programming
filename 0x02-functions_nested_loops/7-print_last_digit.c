#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @number: The integer to extract the last digit from.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int number)
{
	int absNumber;

	if (number < 0)
		absNumber = -number;

