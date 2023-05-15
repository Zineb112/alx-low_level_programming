#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers.
 * @width: array width.
 * @height: array height.
 * Return: pointer.
 */
int **alloc_grid(int width, int height)
{
	int x, y, **array;

	if (width == 0 || height == 0)
	{
		return (0);
	}

	array = (int **) malloc(sizeof(int *) * height);
	if (array != 0)
	{
		for (x = 0; x < height; x++)
		{
			array[x] = (int *) malloc(sizeof(int) * width);
			if (array[x] != 0)
			{
				for (y = 0; y < width; y++)
				{
					array[x][y] = 0;
				}
			}
			else
			{
				while (x >= 0)
				{
					free(array[x]);
					x--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
		return (NULL);
}
