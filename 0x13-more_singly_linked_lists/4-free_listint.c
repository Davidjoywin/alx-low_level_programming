#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}


