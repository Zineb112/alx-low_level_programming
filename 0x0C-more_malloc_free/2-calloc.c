#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int 1.
 * @size: unsigned int 2.
 * Return: pointer or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *y;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	x = malloc(size * nmemb);

	if (x == NULL)
	{
		return (0);
	}

	y = x;

	for (a = 0; a < (size * nmemb); a++)
	{
		y[a] = '0';
	}

	return (x);
}
