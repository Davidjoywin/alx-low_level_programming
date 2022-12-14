#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	while ((*head)->next != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	*head = NULL;
}

