#include <stdio.h>
#include <stdlib.h>
#include <math.h> // For sqrt function
#include "search_algos.h"

int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t step = sqrt(size); // Jump step size
    size_t left = 0;
    size_t right = 0;

    while (right < size && array[right] < value)
    {
        left = right;
        right += step;

        printf("Value checked array[%lu] = [%d]\n", right, array[right]);

        if (right >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", left, right);

    for (size_t i = left; i <= right && i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1; // Value not found
}
