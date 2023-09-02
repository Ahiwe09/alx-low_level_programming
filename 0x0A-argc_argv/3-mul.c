#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return:if not receive 2 arg,rt error
 */
int main(int argc, char *argv[])
{
	int p1;
	int p2;
	int mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		p1 = atoi(argv[1]);
		p2 = atoi(argv[2]);
		mul = p1 * p2;
		printf("%d\n", mul);
	}
	return (0);
}
