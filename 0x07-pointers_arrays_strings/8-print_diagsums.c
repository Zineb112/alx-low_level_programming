#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: Matrix.
 * @size: Matrix size
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_1, sum_2;
	int x;

	sum_1 = 0;
	sum_2 = 0;
	x = size - 1;

	while (i <= (size * size))
	{
		sum_1 += a[i];
		i += size + 1;
	}

	while (x < (size * x))
	{
		sum_2 += a[x];
		x += size - 1;
	}
	printf("%d, %d\n", sum_1, sum_2);
}
