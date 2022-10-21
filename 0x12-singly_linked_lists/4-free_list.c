#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the list_t list
 * @head: head of the linkedlist
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		if (head->str != NULL)
			free(head->str);

		head = head->next;
	}
}
