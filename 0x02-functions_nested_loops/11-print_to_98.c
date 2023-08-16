#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 * @num: Starting point for counting.
 *
 * Return: None.
 */
void print_to_98(int num)
{
	if (num <= 98)
	{
		for (num = num; num < 98; num++)
			printf("%d, ", num);
	}
	else
	{
		for (num = num; num > 98; num--)
			printf("%d, ", num);
	}
	printf("98\n");
}

