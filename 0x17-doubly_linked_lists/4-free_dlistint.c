#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint - a function that frees a list.
 * @head: first node
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
