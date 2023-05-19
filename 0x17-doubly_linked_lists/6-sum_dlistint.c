#include "lists.h"
#include <stdio.h>

/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: first node
 *
 * Return: the address of the new element, or NULL if it failed
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
