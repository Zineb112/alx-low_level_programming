#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer.
 * @n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	n--;
	for (i = 0; i < n; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
		n--;
	}
}
