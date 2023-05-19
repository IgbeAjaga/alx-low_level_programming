#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a list.
 * @h: first node in the list
 *
 * Description: doubly linked list node structure
 * Return: all the elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
