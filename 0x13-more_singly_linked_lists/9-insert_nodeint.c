#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: head of a linked list
 * @idx: index to insert in
 * @n: data to be in the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *location;

	i = 0;
	new_node = NULL;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	location = *head;
	while ((i < idx) && (location != NULL))
	{
		location = location->next;
		i++;
	}
	if (idx > i)
	{
		return (NULL);
	}
	new_node->next = location->next;
	location = new_node;
	return (new_node);
}
