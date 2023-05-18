#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: pinter 1.
 * @s2: pointer 2.
 * @n: intger.
 * Return: pointer to th space memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int x, y, Ls1, Ls2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	for (Ls1 = 0; s1[Ls1] != '\0'; Ls1++)
		;
	for (Ls2 = 0; s2[Ls2] != '\0'; Ls2++)
		;

	ptr = malloc(Ls1 + n + 1);
	if (ptr == NULL)
	{
		return (0);
	}

	for (x = 0; s1[x] != '\0'; x++)
	{
		ptr[x] = s1[x];
	}

	for (y = 0; y < n; y++)
	{
		ptr[x] = s2[y];
		x++;
	}

	ptr[x] = '\0';
	return (ptr);
}
