#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Calculates the sum of a variable
 * @n: The number of integers to sum.
 * @...: The integers to be summed.
 * Return: The sum of provided integers, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int sum = 0;

	va_start(ap, n);

	while (i < n)
	{
		int num = va_arg(ap, int);

		sum + = num;
		i++;
	}

	va_end(ap);

	return (sum);
}
