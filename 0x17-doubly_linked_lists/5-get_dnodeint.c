#include "lists.h"
#include <stdio.h>

/**
 * get_dnodeint_at_index - a function that returns the nth node of a linked list.
 * @head: first node
 * @index: Linked list index
 *
 * Return: if the node does not exist, return null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		current = current->next;
		count++;
	}
	return (NULL);
}
