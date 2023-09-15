#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers separated by a string.
 * @separator: The separator between numbers.
 * @n: The number of integers to print.
 * @...: The integers to be printed
 */
void print_numbers(const char separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int index = 0;

	va_start(nums, n);

	while (index < n)
	{
		int num = va_arg(nums, int);

		printf("%d", num);

		if (index != (n - 1))
			putchar(separator);

		index++;
	}

	printf("\n");

	va_end(nums);
}
