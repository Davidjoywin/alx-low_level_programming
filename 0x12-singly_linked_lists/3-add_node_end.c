#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string value of node
 * Return: return the address of the new elemente,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_size;
	list_t *new_node, *last;

	str_size = 0;
	while (str[str_size])
		str_size++;

	new_node = NULL;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_size;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return (new_node);
}
