#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of linked list
 * Return: returns thr head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int data;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	*head = (*head)->next;
	return (data);
}
