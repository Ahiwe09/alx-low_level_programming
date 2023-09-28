#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a = 0;

	if (!b)
		return (0);

	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);

		num <<= 1;
		if (b[a] == '1')
			num += 1;

		a++;
	}

	return (num);
}
