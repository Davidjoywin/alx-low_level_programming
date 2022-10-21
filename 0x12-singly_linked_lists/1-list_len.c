#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: head of the linked list
 * Return: return the number of the elements in a linked * list_t list
 */

size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

