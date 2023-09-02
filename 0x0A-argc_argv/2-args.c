#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: type int argument
 * @argv: type char argument of string.
 *
 * Return: none
 */

int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}

	return (0);
}
