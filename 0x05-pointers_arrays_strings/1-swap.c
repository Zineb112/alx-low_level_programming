#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: First int pointer.
 * @b: Secand int pointer.
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

