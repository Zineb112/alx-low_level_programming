#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: frist pointer.
 * @accept: second pointer.
 * Return: int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j = 0;

	for (i = 0; s[i] > '\0'; i++)
	{
		while (accept[j] != '\0' && s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}
