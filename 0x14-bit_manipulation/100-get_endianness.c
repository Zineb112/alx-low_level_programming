#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: O if big andian, 1 if little endian.
 */
int get_endianness(void)
{
	int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
