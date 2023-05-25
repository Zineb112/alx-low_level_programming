#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (!s)
		{
			s = "(nil)";
		}

		if (!separator)
		{
			printf("%s", s);
		}
		else if (separator && i == 0)
		{
			printf("%s", s);
		}
		else
		{
			printf("%s%s", separator, s);
		}
	}

	printf("\n");

	va_end(ptr);
}


