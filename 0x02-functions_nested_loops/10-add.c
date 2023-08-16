#include <stdio.h>
/**
 * Write a function that adds two integers and returns the result.
 */
int add(int a, int b)
{

	return (a + b);

}
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
