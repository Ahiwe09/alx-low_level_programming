#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -Allocates memory using malloc
 * @b: Size of memory to allocate in bytes.
 *
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
