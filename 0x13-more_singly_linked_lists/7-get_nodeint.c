#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: head of linked list
 * @index: index of the node starting at 0
 * Return: returns the node at index, index, return null if not in exitence
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while ((i < index) && (head != NULL))
	{
		head = head->next;
		i++;
	}	

	return (head);
}
