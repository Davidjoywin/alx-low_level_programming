#include <stdio.h>
#include "lists.h"

/**
 * print_list - functiion that prints all the elements of a list_t list
 * @h: head of a linked list
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
			printf("[0] %p\n", h->str);
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

