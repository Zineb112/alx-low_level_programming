#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The first index where the value is located,
 * or -1 if the value is not present in the array or if the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t mid;

    if (array == NULL || size == 0)
        return -1;

    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound - 1);

    /* Perform binary search within the found range */
    mid = (bound < size - 1) ? bound : size - 1;

    return binary_search_exp(array, bound / 2, mid, value);
}

/**
 * binary_search_exp - Helper function for binary search in exponential search.
 * @array: Pointer to the first element of the array to search in.
 * @left: Starting index for the binary search.
 * @right: Ending index for the binary search.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 * or -1 if the value is not present in the array.
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    while (left <= right)
    {
        mid = left + (right - left) / 2;

        /* Print the current subarray being searched */
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i < right)
                printf("%d, ", array[i]);
            else
                printf("%d", array[i]);
        }
        printf("\n");

        /* Check if the value is present at the middle of the array */
        if (array[mid] == value)
            return mid;

        /* If the value is smaller, ignore the right half */
        if (array[mid] > value)
            right = mid - 1;
        /* If the value is larger, ignore the left half */
        else
            left = mid + 1;
    }

    return -1; /* Value not found */
}
