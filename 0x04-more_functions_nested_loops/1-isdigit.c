#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: integer.
 * Return: 1 if c is a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	return (0);
}
