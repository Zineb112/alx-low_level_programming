#include "main.h"
#include <stdio.h>

/**
 * *_strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byt.
 * @dest: first pointer.
 * @src: second pointer.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
