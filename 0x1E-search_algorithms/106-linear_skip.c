#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head of the skip list to search in
 * @value: the value to search for
 * Return: index of the number in the array
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *res;

	if (list == NULL)
		return (NULL);

	res = list;

	do {
		list = res;
		res = res->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)res->index, res->n);
	} while (res->express && res->n < value);

	if (res->express == NULL)
	{
		list = res;
		while (res->next)
			res = res->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)res->index);

	while (list != res->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
