#include "main.h"

/**
 * *_strncpy - copies a string.
 * @dest: frist pointer.
 * src: second pointer.
 * Return: pointer to the resulting string dest. 
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	i = 0;

	while (src[x] != '\0' && x < n)
	{
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
