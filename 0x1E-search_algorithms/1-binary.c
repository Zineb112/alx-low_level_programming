#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 * or -1 if the value is not present in the array or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (array == NULL)
        return -1;

    while (left <= right)
    {
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i < right)
                printf("%d, ", array[i]);
            else
                printf("%d", array[i]);
        }
        printf("\n");

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return mid;

        if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}
