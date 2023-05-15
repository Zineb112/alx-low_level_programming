#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer 1.
 * @s2: pointer 2.
 * Return: pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x, y, z, i;

	if (s1 == 0)
	{
		s1 = "\0";
	}
	if (s2 == 0)
	{
		s2 = "\0";
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		;
	}
	for (y = 0; s2[y] != '\0'; y++)
	{
		;
	}
	ptr = malloc(sizeof(char) * (x + y + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (0);
	}
	for (z = 0; z < x; z++)
	{
		ptr[z] = s1[z];
	}

	i = y;
	for (y = 0; y <= i; z++, y++)
	{
		ptr[z] = s2[y];
	}

	return (ptr);
}
