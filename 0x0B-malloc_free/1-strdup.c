#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of
 * the string given as a parameter.
 * @str: char pointer.
 * Return: NULL if str = NULL.
 */
char *_strdup(char *str)
{
	int i;
	int x;
	char *ptr;

	if (str == 0)
	{
		return (0);
	}

	for (x = 0; str[x] != '\0'; x++)
		;

	ptr = malloc(x * sizeof(*str) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < x; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
