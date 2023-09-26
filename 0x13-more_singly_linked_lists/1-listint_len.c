#include "lists.h"
/**
 * listint_len - Counts the number of elements in a linked list.
 * @h:Pointer to the linked list
 *
 * Return: The total number of node
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		num++;
	}

	return (num);
}
