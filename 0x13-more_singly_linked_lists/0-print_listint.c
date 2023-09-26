#include "lists.h"
/**
 * print_listint - to display all elements of a linked list
 * @h:Pointer to the linked list of type listint_t.
 *
 * Return:The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		num++;
	}

	return (num);
}
