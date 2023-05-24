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
	int x = 0;

	if (array && size && cmp)
	{
		while (x < size)
		{
			if (cmp(array[x]))
			{
				return (x);
			}
			x++;
		}
	}
}
