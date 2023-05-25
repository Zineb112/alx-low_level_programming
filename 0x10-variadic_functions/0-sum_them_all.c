#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - gives the sum of all its parameters.
 * @n: const unsigned int.
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int SUM = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		SUM += va_arg(ptr, int);
	}

	va_end(ptr);

	return (SUM);
}
