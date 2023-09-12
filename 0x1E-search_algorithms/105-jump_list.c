#include <stdio.h>
#include <stdlib.h>
#include <math.h> // For the sqrt function
#include "search_algos.h"

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step = sqrt(size);
    listint_t *current = list;
    listint_t *prev = NULL;

    if (list == NULL)
        return NULL;

    while (current && current->n < value)
    {
        prev = current;
        for (size_t i = 0; current->next && i < step; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);

    current = prev;
    while (current && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return current;
        current = current->next;
    }

    return NULL;
}
