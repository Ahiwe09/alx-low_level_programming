#include <stdio.h>

/**
 *  main - Write a program that prints
 *  the number of arguments passed into it.
 *  @argc: type int argument
 *  @argv: type char argument of strings
 *
 *  Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
