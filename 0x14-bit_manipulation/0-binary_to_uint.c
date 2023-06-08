#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: const char.
 * Return: decimal number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x, y;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (y = 1, x = 0, i--; i >= 0; i--, y *= 2)
	{
		if (b[i] == '1')
			x += y;
	}

	return (x);
}
