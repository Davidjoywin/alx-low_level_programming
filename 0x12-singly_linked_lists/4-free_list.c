#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: head of the linkedlist
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str != NULL)
			free(head->str);
		free(head);

		head = head->next;
	}
}
