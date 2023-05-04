#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: first pointer.
 * @s2: second pointer.
 * Return: an int.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}

		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (0);
	}
	else
	{
		return (-1);

	}
}
