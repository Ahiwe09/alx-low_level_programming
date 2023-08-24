#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n--;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
}	}
