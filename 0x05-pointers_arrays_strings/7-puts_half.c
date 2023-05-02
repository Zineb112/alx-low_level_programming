#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: char pointer.
 */
void puts_half(char *str)
{
	int a, b, i;

	b = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		b++;
	}

	a = (b / 2);

	if ((b % 2) == 1)
	{
		a = ((b + 1) / 2);
	}

	for (i = a; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
