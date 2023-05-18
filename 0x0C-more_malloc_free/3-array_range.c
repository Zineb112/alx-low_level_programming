#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: intger 1.
 * @max: intger 2.
 * Return: pointer or NULL.
 */
int *array_range(int min, int max)
{
	int *ptr, x, y;

	if (min > max)
	{
		return (0);
	}

	y = max - min + 1;

	ptr = malloc(sizeof(int) * y);
	if (ptr == NULL)
	{
		return (0);
	}

	for (x = 0; min <= max; x++)
	{
		ptr[x] = min++;
	}

	return (ptr);
}
