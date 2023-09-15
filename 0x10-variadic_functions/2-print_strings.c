#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings separated by a string.
 * @separator: String separator between strings.
 * @n: Number of strings to print.
 * @...: Strings to be printed.
 *
 * Description: If separator is NULL, it's not printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index = 0;

	va_start(strings, n);

	while (index < n)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);

		index++;
	}

	printf("\n");

	va_end(strings);
}
