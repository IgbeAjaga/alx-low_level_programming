#include <stdio.h>
#include <stdlib.h>
#include <math.h> // For the sqrt function
#include "search_algos.h"

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    if (list == NULL)
        return NULL;

    skiplist_t *current = list;
    skiplist_t *express = list;

    while (express && express->n < value)
    {
        current = express;
        express = express->express;

        if (express != NULL)
            printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express->index);

    while (current && current->n <= value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n == value)
            return current;
        current = current->next;
    }

    return NULL;
}
