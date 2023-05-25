#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything.
 * @format: list of types of arguments
 * passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int i = 0;
	char *ptr1, *ptr2 = "";

	va_start(ptr, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", ptr2, va_arg(ptr, int));
					break;
				case 'i':
					printf("%s%d", ptr2, va_arg(ptr, int));
					break;
				case 'f':
					printf("%s%f", ptr2, va_arg(ptr, double));
					break;
				case 's':
					ptr1 = va_arg(ptr, char *);
					if (!ptr1)
						ptr1 = "(nil)";
					printf("%s%s", ptr2, ptr1);
					break;
				default:
					i++;
					continue;
			}
			ptr2 = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(ptr);
}
