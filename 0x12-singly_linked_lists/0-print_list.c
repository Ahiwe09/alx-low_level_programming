#include <stdio.h>
#include "lists.h"
/**
 * print_list - Display all elements of a linked list
 * @h: Pointer to the list_t list for printing
 * Return: Number of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	for (; h; h = h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", (unsigned long)h->len, h->str);
		nodes_printed++;
	}

	return (nodes_printed);
}
