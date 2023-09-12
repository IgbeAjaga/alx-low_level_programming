#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Value not found
}
