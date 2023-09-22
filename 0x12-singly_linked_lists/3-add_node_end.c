#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Appends a new node to the end of a linked list
 * @head: Double pointer to the list_t list
 * @str: The string to be placed in the new node
 * Return: The address of the newly created element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
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
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	for (; temp->next; temp = temp->next)
	{
		continue;
	}

	temp->next = new;

	return (new);
}
