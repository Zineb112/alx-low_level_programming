#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: char pointer.
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	_putchar('\n');
	_puts_recursion(++s);
}
