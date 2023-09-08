#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers.
 * @min: Minimum range of values stored.
 * @max: Maximum range of values stored and number of elements.
 *
 * Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *p;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k = k + 1)
		p[k] = min++;

	return (p);
}
