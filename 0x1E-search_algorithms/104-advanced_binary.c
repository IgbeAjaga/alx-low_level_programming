#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int advanced_binary_helper(int *array, int left, int right, int value)
{
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    printf("Searching in array: ");
    for (int i = left; i <= right; i++)
    {
        if (i != left)
            printf(", ");
        printf("%d", array[i]);
    }
    printf("\n");

    if (array[mid] == value)
    {
        if (mid == left || array[mid - 1] != value)
            return mid;
        else
            return advanced_binary_helper(array, left, mid - 1, value);
    }
    else if (array[mid] < value)
        return advanced_binary_helper(array, mid + 1, right, value);
    else
        return advanced_binary_helper(array, left, mid - 1, value);
}

int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_helper(array, 0, size - 1, value);
}
