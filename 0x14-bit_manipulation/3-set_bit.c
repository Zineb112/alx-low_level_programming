#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: decimal numbedecimal numbe.
 * @index: index position.
 * Return: 1 on success, -1 error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
