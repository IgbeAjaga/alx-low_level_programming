#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - the number of elements in a list.
 * @h: first node in the list
 *
 * Description: doubly linked list node structure
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
