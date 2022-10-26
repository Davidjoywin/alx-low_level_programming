#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function tha returns the number of element
 * in a linked listint_t list
 * @h: head of linked list
 * Return: return the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
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
