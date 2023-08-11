#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * REturn: Always 0
 */
int main(void)
{
	int n;

	stand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		("%d is zero\n", n);
	else
		printf("%d is nagative\n", n);
	return (0);

