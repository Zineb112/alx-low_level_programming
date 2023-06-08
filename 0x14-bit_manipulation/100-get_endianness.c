#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: O if big andian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *x = (char *)&i;

	if (*x)
		return (1);
	return (0);
}
