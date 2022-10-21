#include <stdlib.h>
#include "lists.h"

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		free(head->str);
		head = head->next;
	}
}
