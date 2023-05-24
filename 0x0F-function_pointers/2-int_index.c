#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: an array.
 * @size: the array size.
 * @cmp: pointer to a functaion.
 * Return: intger.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}
	}

	return (-1);
}
