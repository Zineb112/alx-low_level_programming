#include "main.h"

/**
 * *leet - encodes a string into 1337.
 * @s: string pointer.
 * Return: string.
 */
char *leet(char *s)
{
	int x;
	int y;

	char *xx = "aAeEoOtTlL";
	char *yy = "4433007711";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == xx[y])
			{
				s[x] = yy[y];
			}
		}
	}
	return (s);
}
