#include <stdlib.h>
#include "lists.h"
/**
 * list_len - Determines the count of elements in a linked list
 *  @h: Pointer to the list_t list
 *
 *  Return: The total number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	for (; h; h = h->next)
	{
		a++;
	}

	return (a);
}
