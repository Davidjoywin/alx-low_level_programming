#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - function tha prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: return the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}