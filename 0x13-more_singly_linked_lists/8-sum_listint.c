#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the 
 * data (n) of a listint_t linked list
 * @head: head of linked list
 * Return: returns the sum of all the data of a linked list
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

