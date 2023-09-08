#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated by malloc.
 * @old_size: Size of the allocated memory for ptr.
 * @new_size: New size of the new memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (index = 0; index < new_size; index++)
			new_ptr[index] = old_ptr[index];
	}
	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			new_ptr[index] = old_ptr[index];
	}
	free(ptr);
	return (new_ptr);
}
