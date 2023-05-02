#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: char pointer.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i = 0;
	int x;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (x = i; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
