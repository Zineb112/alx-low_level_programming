#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: chat pointer.
 * Return: nothing.
 */
void rev_string(char *s)
{
	char x = s[0];
	int length;
	int i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		length--;
		x = s[i];
		s[i] = s[length];
		s[length] = x;
	}
}
