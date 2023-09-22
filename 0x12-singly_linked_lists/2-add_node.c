#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - Inserts a new node at the start of a linked list
 * @head: Double pointer to the list_t list
 * @str: The string to be added as the content of the new node
 * Return: The address of the new created element, or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	for (; str[len]; len++)
	{
		continue;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
