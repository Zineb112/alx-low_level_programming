#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 *  parameter on each element of an array.
 *  @array: an array.
 *  @size: array size.
 *  @action: pointer to a finction.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *ptr = array + size - 1;

	if (array && size && action)
	{
		while (array <= ptr)
		{
			action(*array++);
		}
	}
}
